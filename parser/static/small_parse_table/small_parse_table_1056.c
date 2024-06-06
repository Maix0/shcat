/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1056.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5280(t_small_parse_table_array *v)
{
	v->a[105600] = actions(3131);
	v->a[105601] = 2;
	v->a[105602] = sym_test_operator;
	v->a[105603] = sym_raw_string;
	v->a[105604] = state(581);
	v->a[105605] = 2;
	v->a[105606] = sym_concatenation;
	v->a[105607] = aux_sym_for_statement_repeat1;
	v->a[105608] = state(1412);
	v->a[105609] = 7;
	v->a[105610] = sym_arithmetic_expansion;
	v->a[105611] = sym_brace_expression;
	v->a[105612] = sym_string;
	v->a[105613] = sym_number;
	v->a[105614] = sym_simple_expansion;
	v->a[105615] = sym_expansion;
	v->a[105616] = sym_command_substitution;
	v->a[105617] = 3;
	v->a[105618] = actions(3);
	v->a[105619] = 1;
	small_parse_table_5281(v);
}

void	small_parse_table_5281(t_small_parse_table_array *v)
{
	v->a[105620] = sym_comment;
	v->a[105621] = actions(6065);
	v->a[105622] = 3;
	v->a[105623] = sym_file_descriptor;
	v->a[105624] = ts_builtin_sym_end;
	v->a[105625] = aux_sym_heredoc_redirect_token1;
	v->a[105626] = actions(6063);
	v->a[105627] = 21;
	v->a[105628] = anon_sym_PIPE;
	v->a[105629] = anon_sym_RPAREN;
	v->a[105630] = anon_sym_SEMI_SEMI;
	v->a[105631] = anon_sym_PIPE_AMP;
	v->a[105632] = anon_sym_AMP_AMP;
	v->a[105633] = anon_sym_PIPE_PIPE;
	v->a[105634] = anon_sym_LT;
	v->a[105635] = anon_sym_GT;
	v->a[105636] = anon_sym_GT_GT;
	v->a[105637] = anon_sym_AMP_GT;
	v->a[105638] = anon_sym_AMP_GT_GT;
	v->a[105639] = anon_sym_LT_AMP;
	small_parse_table_5282(v);
}

void	small_parse_table_5282(t_small_parse_table_array *v)
{
	v->a[105640] = anon_sym_GT_AMP;
	v->a[105641] = anon_sym_GT_PIPE;
	v->a[105642] = anon_sym_LT_AMP_DASH;
	v->a[105643] = anon_sym_GT_AMP_DASH;
	v->a[105644] = anon_sym_LT_LT;
	v->a[105645] = anon_sym_LT_LT_DASH;
	v->a[105646] = anon_sym_AMP;
	v->a[105647] = anon_sym_BQUOTE;
	v->a[105648] = anon_sym_SEMI;
	v->a[105649] = 17;
	v->a[105650] = actions(57);
	v->a[105651] = 1;
	v->a[105652] = sym_comment;
	v->a[105653] = actions(5334);
	v->a[105654] = 1;
	v->a[105655] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105656] = actions(5336);
	v->a[105657] = 1;
	v->a[105658] = anon_sym_DOLLAR;
	v->a[105659] = actions(5340);
	small_parse_table_5283(v);
}

void	small_parse_table_5283(t_small_parse_table_array *v)
{
	v->a[105660] = 1;
	v->a[105661] = anon_sym_DQUOTE;
	v->a[105662] = actions(5344);
	v->a[105663] = 1;
	v->a[105664] = aux_sym_number_token1;
	v->a[105665] = actions(5346);
	v->a[105666] = 1;
	v->a[105667] = aux_sym_number_token2;
	v->a[105668] = actions(5348);
	v->a[105669] = 1;
	v->a[105670] = anon_sym_DOLLAR_LBRACE;
	v->a[105671] = actions(5350);
	v->a[105672] = 1;
	v->a[105673] = anon_sym_DOLLAR_LPAREN;
	v->a[105674] = actions(5352);
	v->a[105675] = 1;
	v->a[105676] = anon_sym_BQUOTE;
	v->a[105677] = actions(5354);
	v->a[105678] = 1;
	v->a[105679] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5284(v);
}

void	small_parse_table_5284(t_small_parse_table_array *v)
{
	v->a[105680] = actions(5360);
	v->a[105681] = 1;
	v->a[105682] = sym__brace_start;
	v->a[105683] = actions(5586);
	v->a[105684] = 1;
	v->a[105685] = sym__special_character;
	v->a[105686] = actions(6077);
	v->a[105687] = 1;
	v->a[105688] = sym_word;
	v->a[105689] = state(1237);
	v->a[105690] = 1;
	v->a[105691] = aux_sym__literal_repeat1;
	v->a[105692] = actions(6079);
	v->a[105693] = 2;
	v->a[105694] = sym_test_operator;
	v->a[105695] = sym_raw_string;
	v->a[105696] = state(499);
	v->a[105697] = 2;
	v->a[105698] = sym_concatenation;
	v->a[105699] = aux_sym_for_statement_repeat1;
	small_parse_table_5285(v);
}

/* EOF small_parse_table_1056.c */
