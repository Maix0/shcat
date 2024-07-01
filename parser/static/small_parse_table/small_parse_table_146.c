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
	v->a[14600] = anon_sym_until;
	v->a[14601] = actions(226);
	v->a[14602] = 2;
	v->a[14603] = anon_sym_LT_AMP_DASH;
	v->a[14604] = anon_sym_GT_AMP_DASH;
	v->a[14605] = actions(228);
	v->a[14606] = 2;
	v->a[14607] = sym_raw_string;
	v->a[14608] = sym_number;
	v->a[14609] = state(382);
	v->a[14610] = 5;
	v->a[14611] = sym_arithmetic_expansion;
	v->a[14612] = sym_string;
	v->a[14613] = sym_simple_expansion;
	v->a[14614] = sym_expansion;
	v->a[14615] = sym_command_substitution;
	v->a[14616] = actions(224);
	v->a[14617] = 6;
	v->a[14618] = anon_sym_LT;
	v->a[14619] = anon_sym_GT;
	small_parse_table_731(v);
}

void	small_parse_table_731(t_small_parse_table_array *v)
{
	v->a[14620] = anon_sym_GT_GT;
	v->a[14621] = anon_sym_LT_AMP;
	v->a[14622] = anon_sym_GT_AMP;
	v->a[14623] = anon_sym_GT_PIPE;
	v->a[14624] = state(1087);
	v->a[14625] = 12;
	v->a[14626] = sym_redirected_statement;
	v->a[14627] = sym_for_statement;
	v->a[14628] = sym_while_statement;
	v->a[14629] = sym_if_statement;
	v->a[14630] = sym_case_statement;
	v->a[14631] = sym_function_definition;
	v->a[14632] = sym_compound_statement;
	v->a[14633] = sym_subshell;
	v->a[14634] = sym_list;
	v->a[14635] = sym_negated_command;
	v->a[14636] = sym_command;
	v->a[14637] = sym__variable_assignments;
	v->a[14638] = 32;
	v->a[14639] = actions(3);
	small_parse_table_732(v);
}

void	small_parse_table_732(t_small_parse_table_array *v)
{
	v->a[14640] = 1;
	v->a[14641] = sym_comment;
	v->a[14642] = actions(9);
	v->a[14643] = 1;
	v->a[14644] = anon_sym_for;
	v->a[14645] = actions(13);
	v->a[14646] = 1;
	v->a[14647] = anon_sym_if;
	v->a[14648] = actions(15);
	v->a[14649] = 1;
	v->a[14650] = anon_sym_case;
	v->a[14651] = actions(17);
	v->a[14652] = 1;
	v->a[14653] = anon_sym_LPAREN;
	v->a[14654] = actions(19);
	v->a[14655] = 1;
	v->a[14656] = anon_sym_LBRACE;
	v->a[14657] = actions(59);
	v->a[14658] = 1;
	v->a[14659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_733(v);
}

void	small_parse_table_733(t_small_parse_table_array *v)
{
	v->a[14660] = actions(61);
	v->a[14661] = 1;
	v->a[14662] = anon_sym_DOLLAR;
	v->a[14663] = actions(63);
	v->a[14664] = 1;
	v->a[14665] = anon_sym_DQUOTE;
	v->a[14666] = actions(67);
	v->a[14667] = 1;
	v->a[14668] = anon_sym_DOLLAR_LBRACE;
	v->a[14669] = actions(69);
	v->a[14670] = 1;
	v->a[14671] = anon_sym_DOLLAR_LPAREN;
	v->a[14672] = actions(71);
	v->a[14673] = 1;
	v->a[14674] = anon_sym_BQUOTE;
	v->a[14675] = actions(73);
	v->a[14676] = 1;
	v->a[14677] = sym_file_descriptor;
	v->a[14678] = actions(75);
	v->a[14679] = 1;
	small_parse_table_734(v);
}

void	small_parse_table_734(t_small_parse_table_array *v)
{
	v->a[14680] = sym_variable_name;
	v->a[14681] = actions(240);
	v->a[14682] = 1;
	v->a[14683] = sym_word;
	v->a[14684] = actions(242);
	v->a[14685] = 1;
	v->a[14686] = anon_sym_BANG;
	v->a[14687] = state(136);
	v->a[14688] = 1;
	v->a[14689] = aux_sym__statements_repeat1;
	v->a[14690] = state(188);
	v->a[14691] = 1;
	v->a[14692] = sym_command_name;
	v->a[14693] = state(297);
	v->a[14694] = 1;
	v->a[14695] = sym_variable_assignment;
	v->a[14696] = state(650);
	v->a[14697] = 1;
	v->a[14698] = sym_concatenation;
	v->a[14699] = state(749);
	small_parse_table_735(v);
}

/* EOF small_parse_table_146.c */
