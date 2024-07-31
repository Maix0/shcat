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
	v->a[14600] = sym_case_statement;
	v->a[14601] = sym_function_definition;
	v->a[14602] = sym_compound_statement;
	v->a[14603] = sym_subshell;
	v->a[14604] = sym_list;
	v->a[14605] = sym_negated_command;
	v->a[14606] = sym_command;
	v->a[14607] = sym__variable_assignments;
	v->a[14608] = 28;
	v->a[14609] = actions(3);
	v->a[14610] = 1;
	v->a[14611] = sym_comment;
	v->a[14612] = actions(79);
	v->a[14613] = 1;
	v->a[14614] = sym_word;
	v->a[14615] = actions(81);
	v->a[14616] = 1;
	v->a[14617] = anon_sym_for;
	v->a[14618] = actions(85);
	v->a[14619] = 1;
	small_parse_table_731(v);
}

void	small_parse_table_731(t_small_parse_table_array *v)
{
	v->a[14620] = anon_sym_if;
	v->a[14621] = actions(87);
	v->a[14622] = 1;
	v->a[14623] = anon_sym_case;
	v->a[14624] = actions(89);
	v->a[14625] = 1;
	v->a[14626] = anon_sym_LPAREN;
	v->a[14627] = actions(93);
	v->a[14628] = 1;
	v->a[14629] = anon_sym_LBRACE;
	v->a[14630] = actions(95);
	v->a[14631] = 1;
	v->a[14632] = anon_sym_BANG;
	v->a[14633] = actions(99);
	v->a[14634] = 1;
	v->a[14635] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14636] = actions(101);
	v->a[14637] = 1;
	v->a[14638] = anon_sym_DOLLAR;
	v->a[14639] = actions(103);
	small_parse_table_732(v);
}

void	small_parse_table_732(t_small_parse_table_array *v)
{
	v->a[14640] = 1;
	v->a[14641] = anon_sym_DQUOTE;
	v->a[14642] = actions(107);
	v->a[14643] = 1;
	v->a[14644] = anon_sym_DOLLAR_LBRACE;
	v->a[14645] = actions(109);
	v->a[14646] = 1;
	v->a[14647] = anon_sym_DOLLAR_LPAREN;
	v->a[14648] = actions(111);
	v->a[14649] = 1;
	v->a[14650] = anon_sym_BQUOTE;
	v->a[14651] = actions(113);
	v->a[14652] = 1;
	v->a[14653] = sym_variable_name;
	v->a[14654] = state(185);
	v->a[14655] = 1;
	v->a[14656] = sym_command_name;
	v->a[14657] = state(297);
	v->a[14658] = 1;
	v->a[14659] = sym_variable_assignment;
	small_parse_table_733(v);
}

void	small_parse_table_733(t_small_parse_table_array *v)
{
	v->a[14660] = state(491);
	v->a[14661] = 1;
	v->a[14662] = aux_sym_command_repeat1;
	v->a[14663] = state(599);
	v->a[14664] = 1;
	v->a[14665] = sym_concatenation;
	v->a[14666] = state(615);
	v->a[14667] = 1;
	v->a[14668] = sym_file_redirect;
	v->a[14669] = state(965);
	v->a[14670] = 1;
	v->a[14671] = sym_pipeline;
	v->a[14672] = state(1015);
	v->a[14673] = 1;
	v->a[14674] = aux_sym_redirected_statement_repeat2;
	v->a[14675] = state(1610);
	v->a[14676] = 1;
	v->a[14677] = sym__statement_not_pipeline;
	v->a[14678] = actions(83);
	v->a[14679] = 2;
	small_parse_table_734(v);
}

void	small_parse_table_734(t_small_parse_table_array *v)
{
	v->a[14680] = anon_sym_while;
	v->a[14681] = anon_sym_until;
	v->a[14682] = actions(105);
	v->a[14683] = 2;
	v->a[14684] = sym_raw_string;
	v->a[14685] = sym_number;
	v->a[14686] = state(341);
	v->a[14687] = 5;
	v->a[14688] = sym_arithmetic_expansion;
	v->a[14689] = sym_string;
	v->a[14690] = sym_simple_expansion;
	v->a[14691] = sym_expansion;
	v->a[14692] = sym_command_substitution;
	v->a[14693] = actions(97);
	v->a[14694] = 7;
	v->a[14695] = anon_sym_LT;
	v->a[14696] = anon_sym_GT;
	v->a[14697] = anon_sym_GT_GT;
	v->a[14698] = anon_sym_LT_AMP;
	v->a[14699] = anon_sym_GT_AMP;
	small_parse_table_735(v);
}

/* EOF small_parse_table_146.c */
