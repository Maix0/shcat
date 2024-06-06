/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_146.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_730(t_small_parse_table_array *v)
{
	v->a[14600] = anon_sym_AMP_AMP;
	v->a[14601] = anon_sym_PIPE_PIPE;
	v->a[14602] = actions(2454);
	v->a[14603] = 2;
	v->a[14604] = anon_sym_LT_AMP_DASH;
	v->a[14605] = anon_sym_GT_AMP_DASH;
	v->a[14606] = state(2763);
	v->a[14607] = 2;
	v->a[14608] = sym_file_redirect;
	v->a[14609] = aux_sym_redirected_statement_repeat2;
	v->a[14610] = state(2716);
	v->a[14611] = 7;
	v->a[14612] = sym_arithmetic_expansion;
	v->a[14613] = sym_brace_expression;
	v->a[14614] = sym_string;
	v->a[14615] = sym_number;
	v->a[14616] = sym_simple_expansion;
	v->a[14617] = sym_expansion;
	v->a[14618] = sym_command_substitution;
	v->a[14619] = actions(2452);
	small_parse_table_731(v);
}

void	small_parse_table_731(t_small_parse_table_array *v)
{
	v->a[14620] = 8;
	v->a[14621] = anon_sym_LT;
	v->a[14622] = anon_sym_GT;
	v->a[14623] = anon_sym_GT_GT;
	v->a[14624] = anon_sym_AMP_GT;
	v->a[14625] = anon_sym_AMP_GT_GT;
	v->a[14626] = anon_sym_LT_AMP;
	v->a[14627] = anon_sym_GT_AMP;
	v->a[14628] = anon_sym_GT_PIPE;
	v->a[14629] = 6;
	v->a[14630] = actions(3);
	v->a[14631] = 1;
	v->a[14632] = sym_comment;
	v->a[14633] = actions(2537);
	v->a[14634] = 1;
	v->a[14635] = sym_variable_name;
	v->a[14636] = actions(2535);
	v->a[14637] = 2;
	v->a[14638] = aux_sym__simple_variable_name_token1;
	v->a[14639] = aux_sym__multiline_variable_name_token1;
	small_parse_table_732(v);
}

void	small_parse_table_732(t_small_parse_table_array *v)
{
	v->a[14640] = actions(816);
	v->a[14641] = 4;
	v->a[14642] = sym_file_descriptor;
	v->a[14643] = sym_test_operator;
	v->a[14644] = sym__bare_dollar;
	v->a[14645] = sym__brace_start;
	v->a[14646] = actions(2533);
	v->a[14647] = 9;
	v->a[14648] = anon_sym_BANG;
	v->a[14649] = anon_sym_DASH;
	v->a[14650] = anon_sym_STAR;
	v->a[14651] = anon_sym_QMARK;
	v->a[14652] = anon_sym_DOLLAR;
	v->a[14653] = anon_sym_POUND;
	v->a[14654] = anon_sym_AT;
	v->a[14655] = anon_sym_0;
	v->a[14656] = anon_sym__;
	v->a[14657] = actions(810);
	v->a[14658] = 28;
	v->a[14659] = anon_sym_LPAREN;
	small_parse_table_733(v);
}

void	small_parse_table_733(t_small_parse_table_array *v)
{
	v->a[14660] = anon_sym_PIPE;
	v->a[14661] = anon_sym_PIPE_AMP;
	v->a[14662] = anon_sym_AMP_AMP;
	v->a[14663] = anon_sym_PIPE_PIPE;
	v->a[14664] = anon_sym_LT;
	v->a[14665] = anon_sym_GT;
	v->a[14666] = anon_sym_GT_GT;
	v->a[14667] = anon_sym_AMP_GT;
	v->a[14668] = anon_sym_AMP_GT_GT;
	v->a[14669] = anon_sym_LT_AMP;
	v->a[14670] = anon_sym_GT_AMP;
	v->a[14671] = anon_sym_GT_PIPE;
	v->a[14672] = anon_sym_LT_AMP_DASH;
	v->a[14673] = anon_sym_GT_AMP_DASH;
	v->a[14674] = anon_sym_LT_LT;
	v->a[14675] = anon_sym_LT_LT_DASH;
	v->a[14676] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14677] = sym__special_character;
	v->a[14678] = anon_sym_DQUOTE;
	v->a[14679] = sym_raw_string;
	small_parse_table_734(v);
}

void	small_parse_table_734(t_small_parse_table_array *v)
{
	v->a[14680] = aux_sym_number_token1;
	v->a[14681] = aux_sym_number_token2;
	v->a[14682] = anon_sym_DOLLAR_LBRACE;
	v->a[14683] = anon_sym_DOLLAR_LPAREN;
	v->a[14684] = anon_sym_BQUOTE;
	v->a[14685] = anon_sym_DOLLAR_BQUOTE;
	v->a[14686] = sym_word;
	v->a[14687] = 21;
	v->a[14688] = actions(57);
	v->a[14689] = 1;
	v->a[14690] = sym_comment;
	v->a[14691] = actions(2539);
	v->a[14692] = 1;
	v->a[14693] = sym_word;
	v->a[14694] = actions(2541);
	v->a[14695] = 1;
	v->a[14696] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14697] = actions(2543);
	v->a[14698] = 1;
	v->a[14699] = anon_sym_DOLLAR;
	small_parse_table_735(v);
}

/* EOF small_parse_table_146.c */
