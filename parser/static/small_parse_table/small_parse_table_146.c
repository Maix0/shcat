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
	v->a[14600] = state(436);
	v->a[14601] = 5;
	v->a[14602] = sym_arithmetic_expansion;
	v->a[14603] = sym_string;
	v->a[14604] = sym_simple_expansion;
	v->a[14605] = sym_expansion;
	v->a[14606] = sym_command_substitution;
	v->a[14607] = actions(53);
	v->a[14608] = 7;
	v->a[14609] = anon_sym_LT;
	v->a[14610] = anon_sym_GT;
	v->a[14611] = anon_sym_GT_GT;
	v->a[14612] = anon_sym_LT_AMP;
	v->a[14613] = anon_sym_GT_AMP;
	v->a[14614] = anon_sym_GT_PIPE;
	v->a[14615] = anon_sym_LT_GT;
	v->a[14616] = state(1032);
	v->a[14617] = 12;
	v->a[14618] = sym_redirected_statement;
	v->a[14619] = sym_for_statement;
	small_parse_table_731(v);
}

void	small_parse_table_731(t_small_parse_table_array *v)
{
	v->a[14620] = sym_while_statement;
	v->a[14621] = sym_if_statement;
	v->a[14622] = sym_case_statement;
	v->a[14623] = sym_function_definition;
	v->a[14624] = sym_compound_statement;
	v->a[14625] = sym_subshell;
	v->a[14626] = sym_list;
	v->a[14627] = sym_negated_command;
	v->a[14628] = sym_command;
	v->a[14629] = sym__variable_assignments;
	v->a[14630] = 41;
	v->a[14631] = actions(3);
	v->a[14632] = 1;
	v->a[14633] = sym_comment;
	v->a[14634] = actions(9);
	v->a[14635] = 1;
	v->a[14636] = anon_sym_for;
	v->a[14637] = actions(13);
	v->a[14638] = 1;
	v->a[14639] = anon_sym_if;
	small_parse_table_732(v);
}

void	small_parse_table_732(t_small_parse_table_array *v)
{
	v->a[14640] = actions(15);
	v->a[14641] = 1;
	v->a[14642] = anon_sym_case;
	v->a[14643] = actions(17);
	v->a[14644] = 1;
	v->a[14645] = anon_sym_LPAREN;
	v->a[14646] = actions(19);
	v->a[14647] = 1;
	v->a[14648] = anon_sym_LBRACE;
	v->a[14649] = actions(55);
	v->a[14650] = 1;
	v->a[14651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14652] = actions(57);
	v->a[14653] = 1;
	v->a[14654] = anon_sym_DOLLAR;
	v->a[14655] = actions(59);
	v->a[14656] = 1;
	v->a[14657] = anon_sym_DQUOTE;
	v->a[14658] = actions(63);
	v->a[14659] = 1;
	small_parse_table_733(v);
}

void	small_parse_table_733(t_small_parse_table_array *v)
{
	v->a[14660] = anon_sym_DOLLAR_LBRACE;
	v->a[14661] = actions(65);
	v->a[14662] = 1;
	v->a[14663] = anon_sym_DOLLAR_LPAREN;
	v->a[14664] = actions(67);
	v->a[14665] = 1;
	v->a[14666] = anon_sym_BQUOTE;
	v->a[14667] = actions(211);
	v->a[14668] = 1;
	v->a[14669] = sym_word;
	v->a[14670] = actions(213);
	v->a[14671] = 1;
	v->a[14672] = anon_sym_BANG;
	v->a[14673] = actions(219);
	v->a[14674] = 1;
	v->a[14675] = sym_file_descriptor;
	v->a[14676] = actions(221);
	v->a[14677] = 1;
	v->a[14678] = sym_variable_name;
	v->a[14679] = state(118);
	small_parse_table_734(v);
}

void	small_parse_table_734(t_small_parse_table_array *v)
{
	v->a[14680] = 1;
	v->a[14681] = aux_sym__statements_repeat1;
	v->a[14682] = state(173);
	v->a[14683] = 1;
	v->a[14684] = sym_command_name;
	v->a[14685] = state(242);
	v->a[14686] = 1;
	v->a[14687] = sym_variable_assignment;
	v->a[14688] = state(603);
	v->a[14689] = 1;
	v->a[14690] = sym_concatenation;
	v->a[14691] = state(644);
	v->a[14692] = 1;
	v->a[14693] = sym_file_redirect;
	v->a[14694] = state(673);
	v->a[14695] = 1;
	v->a[14696] = aux_sym_command_repeat1;
	v->a[14697] = state(983);
	v->a[14698] = 1;
	v->a[14699] = sym__variable_assignments;
	small_parse_table_735(v);
}

/* EOF small_parse_table_146.c */
