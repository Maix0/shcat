/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1122.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5610(t_small_parse_table_array *v)
{
	v->a[112200] = actions(6428);
	v->a[112201] = 3;
	v->a[112202] = sym_test_operator;
	v->a[112203] = sym__bare_dollar;
	v->a[112204] = sym_raw_string;
	v->a[112205] = state(1969);
	v->a[112206] = 7;
	v->a[112207] = sym_arithmetic_expansion;
	v->a[112208] = sym_brace_expression;
	v->a[112209] = sym_string;
	v->a[112210] = sym_number;
	v->a[112211] = sym_simple_expansion;
	v->a[112212] = sym_expansion;
	v->a[112213] = sym_command_substitution;
	v->a[112214] = 3;
	v->a[112215] = actions(3);
	v->a[112216] = 1;
	v->a[112217] = sym_comment;
	v->a[112218] = actions(6239);
	v->a[112219] = 2;
	small_parse_table_5611(v);
}

void	small_parse_table_5611(t_small_parse_table_array *v)
{
	v->a[112220] = sym_file_descriptor;
	v->a[112221] = aux_sym_heredoc_redirect_token1;
	v->a[112222] = actions(6237);
	v->a[112223] = 21;
	v->a[112224] = anon_sym_PIPE;
	v->a[112225] = anon_sym_SEMI_SEMI;
	v->a[112226] = anon_sym_SEMI_AMP;
	v->a[112227] = anon_sym_SEMI_SEMI_AMP;
	v->a[112228] = anon_sym_PIPE_AMP;
	v->a[112229] = anon_sym_AMP_AMP;
	v->a[112230] = anon_sym_PIPE_PIPE;
	v->a[112231] = anon_sym_LT;
	v->a[112232] = anon_sym_GT;
	v->a[112233] = anon_sym_GT_GT;
	v->a[112234] = anon_sym_AMP_GT;
	v->a[112235] = anon_sym_AMP_GT_GT;
	v->a[112236] = anon_sym_LT_AMP;
	v->a[112237] = anon_sym_GT_AMP;
	v->a[112238] = anon_sym_GT_PIPE;
	v->a[112239] = anon_sym_LT_AMP_DASH;
	small_parse_table_5612(v);
}

void	small_parse_table_5612(t_small_parse_table_array *v)
{
	v->a[112240] = anon_sym_GT_AMP_DASH;
	v->a[112241] = anon_sym_LT_LT;
	v->a[112242] = anon_sym_LT_LT_DASH;
	v->a[112243] = anon_sym_AMP;
	v->a[112244] = anon_sym_SEMI;
	v->a[112245] = 16;
	v->a[112246] = actions(3);
	v->a[112247] = 1;
	v->a[112248] = sym_comment;
	v->a[112249] = actions(5692);
	v->a[112250] = 1;
	v->a[112251] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112252] = actions(5698);
	v->a[112253] = 1;
	v->a[112254] = anon_sym_DQUOTE;
	v->a[112255] = actions(5702);
	v->a[112256] = 1;
	v->a[112257] = aux_sym_number_token1;
	v->a[112258] = actions(5704);
	v->a[112259] = 1;
	small_parse_table_5613(v);
}

void	small_parse_table_5613(t_small_parse_table_array *v)
{
	v->a[112260] = aux_sym_number_token2;
	v->a[112261] = actions(5706);
	v->a[112262] = 1;
	v->a[112263] = anon_sym_DOLLAR_LBRACE;
	v->a[112264] = actions(5708);
	v->a[112265] = 1;
	v->a[112266] = anon_sym_DOLLAR_LPAREN;
	v->a[112267] = actions(5710);
	v->a[112268] = 1;
	v->a[112269] = anon_sym_BQUOTE;
	v->a[112270] = actions(5712);
	v->a[112271] = 1;
	v->a[112272] = anon_sym_DOLLAR_BQUOTE;
	v->a[112273] = actions(5718);
	v->a[112274] = 1;
	v->a[112275] = sym__brace_start;
	v->a[112276] = actions(6444);
	v->a[112277] = 1;
	v->a[112278] = sym_word;
	v->a[112279] = actions(6446);
	small_parse_table_5614(v);
}

void	small_parse_table_5614(t_small_parse_table_array *v)
{
	v->a[112280] = 1;
	v->a[112281] = anon_sym_DOLLAR;
	v->a[112282] = actions(6448);
	v->a[112283] = 1;
	v->a[112284] = sym__special_character;
	v->a[112285] = actions(6452);
	v->a[112286] = 1;
	v->a[112287] = sym__comment_word;
	v->a[112288] = actions(6450);
	v->a[112289] = 3;
	v->a[112290] = sym_test_operator;
	v->a[112291] = sym__bare_dollar;
	v->a[112292] = sym_raw_string;
	v->a[112293] = state(654);
	v->a[112294] = 7;
	v->a[112295] = sym_arithmetic_expansion;
	v->a[112296] = sym_brace_expression;
	v->a[112297] = sym_string;
	v->a[112298] = sym_number;
	v->a[112299] = sym_simple_expansion;
	small_parse_table_5615(v);
}

/* EOF small_parse_table_1122.c */
