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
	v->a[42200] = actions(1057);
	v->a[42201] = 22;
	v->a[42202] = anon_sym_PIPE;
	v->a[42203] = anon_sym_AMP_AMP;
	v->a[42204] = anon_sym_PIPE_PIPE;
	v->a[42205] = anon_sym_LT;
	v->a[42206] = anon_sym_GT;
	v->a[42207] = anon_sym_GT_GT;
	v->a[42208] = anon_sym_LT_AMP;
	v->a[42209] = anon_sym_GT_AMP;
	v->a[42210] = anon_sym_GT_PIPE;
	v->a[42211] = anon_sym_LT_GT;
	v->a[42212] = anon_sym_LT_LT;
	v->a[42213] = anon_sym_LT_LT_DASH;
	v->a[42214] = aux_sym_heredoc_redirect_token1;
	v->a[42215] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42216] = anon_sym_DOLLAR;
	v->a[42217] = anon_sym_DQUOTE;
	v->a[42218] = sym_raw_string;
	v->a[42219] = sym_number;
	small_parse_table_2111(v);
}

void	small_parse_table_2111(t_small_parse_table_array *v)
{
	v->a[42220] = anon_sym_DOLLAR_LBRACE;
	v->a[42221] = anon_sym_DOLLAR_LPAREN;
	v->a[42222] = anon_sym_BQUOTE;
	v->a[42223] = sym_word;
	v->a[42224] = 16;
	v->a[42225] = actions(3);
	v->a[42226] = 1;
	v->a[42227] = sym_comment;
	v->a[42228] = actions(25);
	v->a[42229] = 1;
	v->a[42230] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42231] = actions(27);
	v->a[42232] = 1;
	v->a[42233] = anon_sym_DOLLAR;
	v->a[42234] = actions(29);
	v->a[42235] = 1;
	v->a[42236] = anon_sym_DQUOTE;
	v->a[42237] = actions(33);
	v->a[42238] = 1;
	v->a[42239] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2112(v);
}

void	small_parse_table_2112(t_small_parse_table_array *v)
{
	v->a[42240] = actions(35);
	v->a[42241] = 1;
	v->a[42242] = anon_sym_DOLLAR_LPAREN;
	v->a[42243] = actions(37);
	v->a[42244] = 1;
	v->a[42245] = anon_sym_BQUOTE;
	v->a[42246] = actions(359);
	v->a[42247] = 1;
	v->a[42248] = sym_variable_name;
	v->a[42249] = actions(1152);
	v->a[42250] = 1;
	v->a[42251] = sym_file_descriptor;
	v->a[42252] = state(174);
	v->a[42253] = 1;
	v->a[42254] = sym_command_name;
	v->a[42255] = state(588);
	v->a[42256] = 1;
	v->a[42257] = sym_concatenation;
	v->a[42258] = state(1225);
	v->a[42259] = 1;
	small_parse_table_2113(v);
}

void	small_parse_table_2113(t_small_parse_table_array *v)
{
	v->a[42260] = sym_file_redirect;
	v->a[42261] = state(1024);
	v->a[42262] = 2;
	v->a[42263] = sym_variable_assignment;
	v->a[42264] = aux_sym_command_repeat1;
	v->a[42265] = actions(31);
	v->a[42266] = 3;
	v->a[42267] = sym_raw_string;
	v->a[42268] = sym_number;
	v->a[42269] = sym_word;
	v->a[42270] = state(365);
	v->a[42271] = 5;
	v->a[42272] = sym_arithmetic_expansion;
	v->a[42273] = sym_string;
	v->a[42274] = sym_simple_expansion;
	v->a[42275] = sym_expansion;
	v->a[42276] = sym_command_substitution;
	v->a[42277] = actions(1150);
	v->a[42278] = 7;
	v->a[42279] = anon_sym_LT;
	small_parse_table_2114(v);
}

void	small_parse_table_2114(t_small_parse_table_array *v)
{
	v->a[42280] = anon_sym_GT;
	v->a[42281] = anon_sym_GT_GT;
	v->a[42282] = anon_sym_LT_AMP;
	v->a[42283] = anon_sym_GT_AMP;
	v->a[42284] = anon_sym_GT_PIPE;
	v->a[42285] = anon_sym_LT_GT;
	v->a[42286] = 16;
	v->a[42287] = actions(3);
	v->a[42288] = 1;
	v->a[42289] = sym_comment;
	v->a[42290] = actions(107);
	v->a[42291] = 1;
	v->a[42292] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42293] = actions(109);
	v->a[42294] = 1;
	v->a[42295] = anon_sym_DOLLAR;
	v->a[42296] = actions(111);
	v->a[42297] = 1;
	v->a[42298] = anon_sym_DQUOTE;
	v->a[42299] = actions(115);
	small_parse_table_2115(v);
}

/* EOF small_parse_table_422.c */
