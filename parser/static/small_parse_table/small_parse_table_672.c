/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_672.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3360(t_small_parse_table_array *v)
{
	v->a[67200] = 7;
	v->a[67201] = actions(3);
	v->a[67202] = 1;
	v->a[67203] = sym_comment;
	v->a[67204] = actions(2220);
	v->a[67205] = 1;
	v->a[67206] = sym_file_descriptor;
	v->a[67207] = actions(2027);
	v->a[67208] = 2;
	v->a[67209] = anon_sym_LT_AMP_DASH;
	v->a[67210] = anon_sym_GT_AMP_DASH;
	v->a[67211] = actions(2222);
	v->a[67212] = 2;
	v->a[67213] = ts_builtin_sym_end;
	v->a[67214] = aux_sym_heredoc_redirect_token1;
	v->a[67215] = state(1277);
	v->a[67216] = 2;
	v->a[67217] = sym_file_redirect;
	v->a[67218] = aux_sym_redirected_statement_repeat2;
	v->a[67219] = actions(2025);
	small_parse_table_3361(v);
}

void	small_parse_table_3361(t_small_parse_table_array *v)
{
	v->a[67220] = 6;
	v->a[67221] = anon_sym_LT;
	v->a[67222] = anon_sym_GT;
	v->a[67223] = anon_sym_GT_GT;
	v->a[67224] = anon_sym_LT_AMP;
	v->a[67225] = anon_sym_GT_AMP;
	v->a[67226] = anon_sym_GT_PIPE;
	v->a[67227] = actions(2224);
	v->a[67228] = 8;
	v->a[67229] = anon_sym_PIPE;
	v->a[67230] = anon_sym_SEMI_SEMI;
	v->a[67231] = anon_sym_AMP_AMP;
	v->a[67232] = anon_sym_PIPE_PIPE;
	v->a[67233] = anon_sym_LT_LT;
	v->a[67234] = anon_sym_LT_LT_DASH;
	v->a[67235] = anon_sym_AMP;
	v->a[67236] = anon_sym_SEMI;
	v->a[67237] = 7;
	v->a[67238] = actions(3);
	v->a[67239] = 1;
	small_parse_table_3362(v);
}

void	small_parse_table_3362(t_small_parse_table_array *v)
{
	v->a[67240] = sym_comment;
	v->a[67241] = actions(2216);
	v->a[67242] = 1;
	v->a[67243] = aux_sym_heredoc_redirect_token1;
	v->a[67244] = actions(2226);
	v->a[67245] = 1;
	v->a[67246] = sym_file_descriptor;
	v->a[67247] = actions(2039);
	v->a[67248] = 2;
	v->a[67249] = anon_sym_LT_AMP_DASH;
	v->a[67250] = anon_sym_GT_AMP_DASH;
	v->a[67251] = state(1229);
	v->a[67252] = 2;
	v->a[67253] = sym_file_redirect;
	v->a[67254] = aux_sym_redirected_statement_repeat2;
	v->a[67255] = actions(2037);
	v->a[67256] = 6;
	v->a[67257] = anon_sym_LT;
	v->a[67258] = anon_sym_GT;
	v->a[67259] = anon_sym_GT_GT;
	small_parse_table_3363(v);
}

void	small_parse_table_3363(t_small_parse_table_array *v)
{
	v->a[67260] = anon_sym_LT_AMP;
	v->a[67261] = anon_sym_GT_AMP;
	v->a[67262] = anon_sym_GT_PIPE;
	v->a[67263] = actions(2218);
	v->a[67264] = 9;
	v->a[67265] = anon_sym_PIPE;
	v->a[67266] = anon_sym_SEMI_SEMI;
	v->a[67267] = anon_sym_AMP_AMP;
	v->a[67268] = anon_sym_PIPE_PIPE;
	v->a[67269] = anon_sym_LT_LT;
	v->a[67270] = anon_sym_LT_LT_DASH;
	v->a[67271] = anon_sym_AMP;
	v->a[67272] = anon_sym_BQUOTE;
	v->a[67273] = anon_sym_SEMI;
	v->a[67274] = 15;
	v->a[67275] = actions(3);
	v->a[67276] = 1;
	v->a[67277] = sym_comment;
	v->a[67278] = actions(1774);
	v->a[67279] = 1;
	small_parse_table_3364(v);
}

void	small_parse_table_3364(t_small_parse_table_array *v)
{
	v->a[67280] = anon_sym_LPAREN;
	v->a[67281] = actions(1778);
	v->a[67282] = 1;
	v->a[67283] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67284] = actions(1780);
	v->a[67285] = 1;
	v->a[67286] = anon_sym_DOLLAR;
	v->a[67287] = actions(1782);
	v->a[67288] = 1;
	v->a[67289] = anon_sym_DQUOTE;
	v->a[67290] = actions(1784);
	v->a[67291] = 1;
	v->a[67292] = anon_sym_DOLLAR_LBRACE;
	v->a[67293] = actions(1786);
	v->a[67294] = 1;
	v->a[67295] = anon_sym_DOLLAR_LPAREN;
	v->a[67296] = actions(1788);
	v->a[67297] = 1;
	v->a[67298] = anon_sym_BQUOTE;
	v->a[67299] = actions(1790);
	small_parse_table_3365(v);
}

/* EOF small_parse_table_672.c */
