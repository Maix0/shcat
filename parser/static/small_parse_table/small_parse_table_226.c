/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_226.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1130(t_small_parse_table_array *v)
{
	v->a[22600] = 1;
	v->a[22601] = aux_sym_concatenation_token1;
	v->a[22602] = actions(3110);
	v->a[22603] = 1;
	v->a[22604] = anon_sym_LPAREN;
	v->a[22605] = actions(3113);
	v->a[22606] = 1;
	v->a[22607] = sym__concat;
	v->a[22608] = state(567);
	v->a[22609] = 1;
	v->a[22610] = aux_sym_concatenation_repeat1;
	v->a[22611] = actions(2754);
	v->a[22612] = 5;
	v->a[22613] = sym_file_descriptor;
	v->a[22614] = sym_test_operator;
	v->a[22615] = sym__bare_dollar;
	v->a[22616] = sym__brace_start;
	v->a[22617] = aux_sym_heredoc_redirect_token1;
	v->a[22618] = actions(2749);
	v->a[22619] = 33;
	small_parse_table_1131(v);
}

void	small_parse_table_1131(t_small_parse_table_array *v)
{
	v->a[22620] = anon_sym_PIPE;
	v->a[22621] = anon_sym_SEMI_SEMI;
	v->a[22622] = anon_sym_SEMI_AMP;
	v->a[22623] = anon_sym_SEMI_SEMI_AMP;
	v->a[22624] = anon_sym_PIPE_AMP;
	v->a[22625] = anon_sym_AMP_AMP;
	v->a[22626] = anon_sym_PIPE_PIPE;
	v->a[22627] = anon_sym_LT;
	v->a[22628] = anon_sym_GT;
	v->a[22629] = anon_sym_GT_GT;
	v->a[22630] = anon_sym_AMP_GT;
	v->a[22631] = anon_sym_AMP_GT_GT;
	v->a[22632] = anon_sym_LT_AMP;
	v->a[22633] = anon_sym_GT_AMP;
	v->a[22634] = anon_sym_GT_PIPE;
	v->a[22635] = anon_sym_LT_AMP_DASH;
	v->a[22636] = anon_sym_GT_AMP_DASH;
	v->a[22637] = anon_sym_LT_LT;
	v->a[22638] = anon_sym_LT_LT_DASH;
	v->a[22639] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1132(v);
}

void	small_parse_table_1132(t_small_parse_table_array *v)
{
	v->a[22640] = anon_sym_AMP;
	v->a[22641] = anon_sym_DOLLAR;
	v->a[22642] = sym__special_character;
	v->a[22643] = anon_sym_DQUOTE;
	v->a[22644] = sym_raw_string;
	v->a[22645] = aux_sym_number_token1;
	v->a[22646] = aux_sym_number_token2;
	v->a[22647] = anon_sym_DOLLAR_LBRACE;
	v->a[22648] = anon_sym_DOLLAR_LPAREN;
	v->a[22649] = anon_sym_BQUOTE;
	v->a[22650] = anon_sym_DOLLAR_BQUOTE;
	v->a[22651] = sym_word;
	v->a[22652] = anon_sym_SEMI;
	v->a[22653] = 9;
	v->a[22654] = actions(3);
	v->a[22655] = 1;
	v->a[22656] = sym_comment;
	v->a[22657] = actions(2949);
	v->a[22658] = 1;
	v->a[22659] = sym_variable_name;
	small_parse_table_1133(v);
}

void	small_parse_table_1133(t_small_parse_table_array *v)
{
	v->a[22660] = actions(2516);
	v->a[22661] = 2;
	v->a[22662] = anon_sym_PIPE;
	v->a[22663] = anon_sym_PIPE_AMP;
	v->a[22664] = actions(2632);
	v->a[22665] = 2;
	v->a[22666] = ts_builtin_sym_end;
	v->a[22667] = aux_sym_heredoc_redirect_token1;
	v->a[22668] = state(2128);
	v->a[22669] = 2;
	v->a[22670] = sym_variable_assignment;
	v->a[22671] = aux_sym_variable_assignments_repeat1;
	v->a[22672] = actions(2526);
	v->a[22673] = 3;
	v->a[22674] = sym_file_descriptor;
	v->a[22675] = sym_test_operator;
	v->a[22676] = sym__brace_start;
	v->a[22677] = state(2129);
	v->a[22678] = 3;
	v->a[22679] = sym_file_redirect;
	small_parse_table_1134(v);
}

void	small_parse_table_1134(t_small_parse_table_array *v)
{
	v->a[22680] = sym_heredoc_redirect;
	v->a[22681] = aux_sym_redirected_statement_repeat1;
	v->a[22682] = actions(2630);
	v->a[22683] = 7;
	v->a[22684] = anon_sym_SEMI_SEMI;
	v->a[22685] = anon_sym_AMP_AMP;
	v->a[22686] = anon_sym_PIPE_PIPE;
	v->a[22687] = anon_sym_LT_LT;
	v->a[22688] = anon_sym_LT_LT_DASH;
	v->a[22689] = anon_sym_AMP;
	v->a[22690] = anon_sym_SEMI;
	v->a[22691] = actions(2512);
	v->a[22692] = 22;
	v->a[22693] = anon_sym_LT;
	v->a[22694] = anon_sym_GT;
	v->a[22695] = anon_sym_GT_GT;
	v->a[22696] = anon_sym_AMP_GT;
	v->a[22697] = anon_sym_AMP_GT_GT;
	v->a[22698] = anon_sym_LT_AMP;
	v->a[22699] = anon_sym_GT_AMP;
	small_parse_table_1135(v);
}

/* EOF small_parse_table_226.c */
