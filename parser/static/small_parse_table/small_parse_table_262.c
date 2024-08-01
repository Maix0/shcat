/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_262.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1310(t_small_parse_table_array *v)
{
	v->a[26200] = sym_comment;
	v->a[26201] = actions(1050);
	v->a[26202] = 2;
	v->a[26203] = sym__concat;
	v->a[26204] = sym__bare_dollar;
	v->a[26205] = actions(1052);
	v->a[26206] = 21;
	v->a[26207] = anon_sym_PIPE;
	v->a[26208] = anon_sym_RPAREN;
	v->a[26209] = anon_sym_SEMI_SEMI;
	v->a[26210] = anon_sym_AMP_AMP;
	v->a[26211] = anon_sym_PIPE_PIPE;
	v->a[26212] = anon_sym_LT;
	v->a[26213] = anon_sym_GT;
	v->a[26214] = anon_sym_GT_GT;
	v->a[26215] = anon_sym_LT_LT;
	v->a[26216] = aux_sym_heredoc_redirect_token1;
	v->a[26217] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26218] = aux_sym_concatenation_token1;
	v->a[26219] = anon_sym_DOLLAR;
	small_parse_table_1311(v);
}

void	small_parse_table_1311(t_small_parse_table_array *v)
{
	v->a[26220] = anon_sym_DQUOTE;
	v->a[26221] = sym_raw_string;
	v->a[26222] = sym_number;
	v->a[26223] = anon_sym_DOLLAR_LBRACE;
	v->a[26224] = anon_sym_DOLLAR_LPAREN;
	v->a[26225] = anon_sym_BQUOTE;
	v->a[26226] = sym_word;
	v->a[26227] = anon_sym_SEMI;
	v->a[26228] = 6;
	v->a[26229] = actions(3);
	v->a[26230] = 1;
	v->a[26231] = sym_comment;
	v->a[26232] = actions(981);
	v->a[26233] = 1;
	v->a[26234] = ts_builtin_sym_end;
	v->a[26235] = actions(1162);
	v->a[26236] = 1;
	v->a[26237] = aux_sym_concatenation_token1;
	v->a[26238] = actions(1165);
	v->a[26239] = 1;
	small_parse_table_1312(v);
}

void	small_parse_table_1312(t_small_parse_table_array *v)
{
	v->a[26240] = sym__concat;
	v->a[26241] = state(397);
	v->a[26242] = 1;
	v->a[26243] = aux_sym_concatenation_repeat1;
	v->a[26244] = actions(973);
	v->a[26245] = 19;
	v->a[26246] = anon_sym_PIPE;
	v->a[26247] = anon_sym_SEMI_SEMI;
	v->a[26248] = anon_sym_AMP_AMP;
	v->a[26249] = anon_sym_PIPE_PIPE;
	v->a[26250] = anon_sym_LT;
	v->a[26251] = anon_sym_GT;
	v->a[26252] = anon_sym_GT_GT;
	v->a[26253] = anon_sym_LT_LT;
	v->a[26254] = aux_sym_heredoc_redirect_token1;
	v->a[26255] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26256] = anon_sym_DOLLAR;
	v->a[26257] = anon_sym_DQUOTE;
	v->a[26258] = sym_raw_string;
	v->a[26259] = sym_number;
	small_parse_table_1313(v);
}

void	small_parse_table_1313(t_small_parse_table_array *v)
{
	v->a[26260] = anon_sym_DOLLAR_LBRACE;
	v->a[26261] = anon_sym_DOLLAR_LPAREN;
	v->a[26262] = anon_sym_BQUOTE;
	v->a[26263] = sym_word;
	v->a[26264] = anon_sym_SEMI;
	v->a[26265] = 15;
	v->a[26266] = actions(3);
	v->a[26267] = 1;
	v->a[26268] = sym_comment;
	v->a[26269] = actions(25);
	v->a[26270] = 1;
	v->a[26271] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26272] = actions(27);
	v->a[26273] = 1;
	v->a[26274] = anon_sym_DOLLAR;
	v->a[26275] = actions(29);
	v->a[26276] = 1;
	v->a[26277] = anon_sym_DQUOTE;
	v->a[26278] = actions(33);
	v->a[26279] = 1;
	small_parse_table_1314(v);
}

void	small_parse_table_1314(t_small_parse_table_array *v)
{
	v->a[26280] = anon_sym_DOLLAR_LBRACE;
	v->a[26281] = actions(35);
	v->a[26282] = 1;
	v->a[26283] = anon_sym_DOLLAR_LPAREN;
	v->a[26284] = actions(37);
	v->a[26285] = 1;
	v->a[26286] = anon_sym_BQUOTE;
	v->a[26287] = actions(341);
	v->a[26288] = 1;
	v->a[26289] = sym_variable_name;
	v->a[26290] = state(172);
	v->a[26291] = 1;
	v->a[26292] = sym_command_name;
	v->a[26293] = state(549);
	v->a[26294] = 1;
	v->a[26295] = sym_concatenation;
	v->a[26296] = state(1083);
	v->a[26297] = 1;
	v->a[26298] = sym_file_redirect;
	v->a[26299] = state(792);
	small_parse_table_1315(v);
}

/* EOF small_parse_table_262.c */
