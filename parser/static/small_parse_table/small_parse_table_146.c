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
	v->a[14600] = 2;
	v->a[14601] = sym_raw_string;
	v->a[14602] = sym_number;
	v->a[14603] = state(394);
	v->a[14604] = 5;
	v->a[14605] = sym_arithmetic_expansion;
	v->a[14606] = sym_string;
	v->a[14607] = sym_simple_expansion;
	v->a[14608] = sym_expansion;
	v->a[14609] = sym_command_substitution;
	v->a[14610] = actions(169);
	v->a[14611] = 8;
	v->a[14612] = anon_sym_LT;
	v->a[14613] = anon_sym_GT;
	v->a[14614] = anon_sym_GT_GT;
	v->a[14615] = anon_sym_AMP_GT;
	v->a[14616] = anon_sym_AMP_GT_GT;
	v->a[14617] = anon_sym_LT_AMP;
	v->a[14618] = anon_sym_GT_AMP;
	v->a[14619] = anon_sym_GT_PIPE;
	small_parse_table_731(v);
}

void	small_parse_table_731(t_small_parse_table_array *v)
{
	v->a[14620] = state(1324);
	v->a[14621] = 12;
	v->a[14622] = sym_redirected_statement;
	v->a[14623] = sym_for_statement;
	v->a[14624] = sym_while_statement;
	v->a[14625] = sym_if_statement;
	v->a[14626] = sym_case_statement;
	v->a[14627] = sym_function_definition;
	v->a[14628] = sym_compound_statement;
	v->a[14629] = sym_subshell;
	v->a[14630] = sym_list;
	v->a[14631] = sym_negated_command;
	v->a[14632] = sym_command;
	v->a[14633] = sym__variable_assignments;
	v->a[14634] = 32;
	v->a[14635] = actions(3);
	v->a[14636] = 1;
	v->a[14637] = sym_comment;
	v->a[14638] = actions(9);
	v->a[14639] = 1;
	small_parse_table_732(v);
}

void	small_parse_table_732(t_small_parse_table_array *v)
{
	v->a[14640] = anon_sym_for;
	v->a[14641] = actions(13);
	v->a[14642] = 1;
	v->a[14643] = anon_sym_if;
	v->a[14644] = actions(15);
	v->a[14645] = 1;
	v->a[14646] = anon_sym_case;
	v->a[14647] = actions(17);
	v->a[14648] = 1;
	v->a[14649] = anon_sym_LPAREN;
	v->a[14650] = actions(19);
	v->a[14651] = 1;
	v->a[14652] = anon_sym_LBRACE;
	v->a[14653] = actions(59);
	v->a[14654] = 1;
	v->a[14655] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14656] = actions(61);
	v->a[14657] = 1;
	v->a[14658] = anon_sym_DOLLAR;
	v->a[14659] = actions(63);
	small_parse_table_733(v);
}

void	small_parse_table_733(t_small_parse_table_array *v)
{
	v->a[14660] = 1;
	v->a[14661] = anon_sym_DQUOTE;
	v->a[14662] = actions(67);
	v->a[14663] = 1;
	v->a[14664] = anon_sym_DOLLAR_LBRACE;
	v->a[14665] = actions(69);
	v->a[14666] = 1;
	v->a[14667] = anon_sym_DOLLAR_LPAREN;
	v->a[14668] = actions(71);
	v->a[14669] = 1;
	v->a[14670] = anon_sym_BQUOTE;
	v->a[14671] = actions(73);
	v->a[14672] = 1;
	v->a[14673] = sym_file_descriptor;
	v->a[14674] = actions(75);
	v->a[14675] = 1;
	v->a[14676] = sym_variable_name;
	v->a[14677] = actions(236);
	v->a[14678] = 1;
	v->a[14679] = sym_word;
	small_parse_table_734(v);
}

void	small_parse_table_734(t_small_parse_table_array *v)
{
	v->a[14680] = actions(238);
	v->a[14681] = 1;
	v->a[14682] = anon_sym_BANG;
	v->a[14683] = state(140);
	v->a[14684] = 1;
	v->a[14685] = aux_sym__statements_repeat1;
	v->a[14686] = state(189);
	v->a[14687] = 1;
	v->a[14688] = sym_command_name;
	v->a[14689] = state(286);
	v->a[14690] = 1;
	v->a[14691] = sym_variable_assignment;
	v->a[14692] = state(647);
	v->a[14693] = 1;
	v->a[14694] = sym_concatenation;
	v->a[14695] = state(746);
	v->a[14696] = 1;
	v->a[14697] = aux_sym_command_repeat1;
	v->a[14698] = state(905);
	v->a[14699] = 1;
	small_parse_table_735(v);
}

/* EOF small_parse_table_146.c */
