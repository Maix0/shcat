/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_422.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2110(t_small_parse_table_array *v)
{
	v->a[42200] = actions(584);
	v->a[42201] = 1;
	v->a[42202] = anon_sym_LT_LT;
	v->a[42203] = actions(586);
	v->a[42204] = 1;
	v->a[42205] = anon_sym_SEMI;
	v->a[42206] = actions(1878);
	v->a[42207] = 1;
	v->a[42208] = aux_sym_heredoc_redirect_token1;
	v->a[42209] = state(340);
	v->a[42210] = 1;
	v->a[42211] = sym_terminator;
	v->a[42212] = actions(582);
	v->a[42213] = 2;
	v->a[42214] = anon_sym_AMP_AMP;
	v->a[42215] = anon_sym_PIPE_PIPE;
	v->a[42216] = actions(591);
	v->a[42217] = 2;
	v->a[42218] = anon_sym_esac;
	v->a[42219] = anon_sym_SEMI_SEMI;
	small_parse_table_2111(v);
}

void	small_parse_table_2111(t_small_parse_table_array *v)
{
	v->a[42220] = actions(1876);
	v->a[42221] = 3;
	v->a[42222] = anon_sym_LT;
	v->a[42223] = anon_sym_GT;
	v->a[42224] = anon_sym_GT_GT;
	v->a[42225] = state(971);
	v->a[42226] = 3;
	v->a[42227] = sym_file_redirect;
	v->a[42228] = sym_heredoc_redirect;
	v->a[42229] = aux_sym_redirected_statement_repeat1;
	v->a[42230] = 4;
	v->a[42231] = actions(3);
	v->a[42232] = 1;
	v->a[42233] = sym_comment;
	v->a[42234] = actions(1176);
	v->a[42235] = 1;
	v->a[42236] = sym_variable_name;
	v->a[42237] = state(1300);
	v->a[42238] = 2;
	v->a[42239] = sym_variable_assignment;
	small_parse_table_2112(v);
}

void	small_parse_table_2112(t_small_parse_table_array *v)
{
	v->a[42240] = aux_sym__variable_assignments_repeat1;
	v->a[42241] = actions(576);
	v->a[42242] = 12;
	v->a[42243] = anon_sym_LT;
	v->a[42244] = anon_sym_GT;
	v->a[42245] = anon_sym_GT_GT;
	v->a[42246] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42247] = anon_sym_DOLLAR;
	v->a[42248] = anon_sym_DQUOTE;
	v->a[42249] = sym_raw_string;
	v->a[42250] = sym_number;
	v->a[42251] = anon_sym_DOLLAR_LBRACE;
	v->a[42252] = anon_sym_DOLLAR_LPAREN;
	v->a[42253] = anon_sym_BQUOTE;
	v->a[42254] = sym_word;
	v->a[42255] = 10;
	v->a[42256] = actions(3);
	v->a[42257] = 1;
	v->a[42258] = sym_comment;
	v->a[42259] = actions(580);
	small_parse_table_2113(v);
}

void	small_parse_table_2113(t_small_parse_table_array *v)
{
	v->a[42260] = 1;
	v->a[42261] = anon_sym_PIPE;
	v->a[42262] = actions(584);
	v->a[42263] = 1;
	v->a[42264] = anon_sym_LT_LT;
	v->a[42265] = actions(586);
	v->a[42266] = 1;
	v->a[42267] = anon_sym_SEMI;
	v->a[42268] = actions(1878);
	v->a[42269] = 1;
	v->a[42270] = aux_sym_heredoc_redirect_token1;
	v->a[42271] = state(348);
	v->a[42272] = 1;
	v->a[42273] = sym_terminator;
	v->a[42274] = actions(582);
	v->a[42275] = 2;
	v->a[42276] = anon_sym_AMP_AMP;
	v->a[42277] = anon_sym_PIPE_PIPE;
	v->a[42278] = actions(591);
	v->a[42279] = 2;
	small_parse_table_2114(v);
}

void	small_parse_table_2114(t_small_parse_table_array *v)
{
	v->a[42280] = anon_sym_esac;
	v->a[42281] = anon_sym_SEMI_SEMI;
	v->a[42282] = actions(1876);
	v->a[42283] = 3;
	v->a[42284] = anon_sym_LT;
	v->a[42285] = anon_sym_GT;
	v->a[42286] = anon_sym_GT_GT;
	v->a[42287] = state(971);
	v->a[42288] = 3;
	v->a[42289] = sym_file_redirect;
	v->a[42290] = sym_heredoc_redirect;
	v->a[42291] = aux_sym_redirected_statement_repeat1;
	v->a[42292] = 10;
	v->a[42293] = actions(3);
	v->a[42294] = 1;
	v->a[42295] = sym_comment;
	v->a[42296] = actions(580);
	v->a[42297] = 1;
	v->a[42298] = anon_sym_PIPE;
	v->a[42299] = actions(584);
	small_parse_table_2115(v);
}

/* EOF small_parse_table_422.c */
