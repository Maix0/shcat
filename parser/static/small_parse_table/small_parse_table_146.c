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
	v->a[14600] = 1;
	v->a[14601] = sym_concatenation;
	v->a[14602] = state(665);
	v->a[14603] = 1;
	v->a[14604] = sym_file_redirect;
	v->a[14605] = state(1172);
	v->a[14606] = 1;
	v->a[14607] = sym_pipeline;
	v->a[14608] = state(1198);
	v->a[14609] = 1;
	v->a[14610] = aux_sym_redirected_statement_repeat2;
	v->a[14611] = state(1901);
	v->a[14612] = 1;
	v->a[14613] = sym__statement_not_pipeline;
	v->a[14614] = actions(11);
	v->a[14615] = 2;
	v->a[14616] = anon_sym_while;
	v->a[14617] = anon_sym_until;
	v->a[14618] = actions(61);
	v->a[14619] = 2;
	small_parse_table_731(v);
}

void	small_parse_table_731(t_small_parse_table_array *v)
{
	v->a[14620] = sym_raw_string;
	v->a[14621] = sym_number;
	v->a[14622] = state(455);
	v->a[14623] = 5;
	v->a[14624] = sym_arithmetic_expansion;
	v->a[14625] = sym_string;
	v->a[14626] = sym_simple_expansion;
	v->a[14627] = sym_expansion;
	v->a[14628] = sym_command_substitution;
	v->a[14629] = actions(53);
	v->a[14630] = 7;
	v->a[14631] = anon_sym_LT;
	v->a[14632] = anon_sym_GT;
	v->a[14633] = anon_sym_GT_GT;
	v->a[14634] = anon_sym_LT_AMP;
	v->a[14635] = anon_sym_GT_AMP;
	v->a[14636] = anon_sym_GT_PIPE;
	v->a[14637] = anon_sym_LT_GT;
	v->a[14638] = state(1033);
	v->a[14639] = 12;
	small_parse_table_732(v);
}

void	small_parse_table_732(t_small_parse_table_array *v)
{
	v->a[14640] = sym_redirected_statement;
	v->a[14641] = sym_for_statement;
	v->a[14642] = sym_while_statement;
	v->a[14643] = sym_if_statement;
	v->a[14644] = sym_case_statement;
	v->a[14645] = sym_function_definition;
	v->a[14646] = sym_compound_statement;
	v->a[14647] = sym_subshell;
	v->a[14648] = sym_list;
	v->a[14649] = sym_negated_command;
	v->a[14650] = sym_command;
	v->a[14651] = sym__variable_assignments;
	v->a[14652] = 30;
	v->a[14653] = actions(3);
	v->a[14654] = 1;
	v->a[14655] = sym_comment;
	v->a[14656] = actions(9);
	v->a[14657] = 1;
	v->a[14658] = anon_sym_for;
	v->a[14659] = actions(13);
	small_parse_table_733(v);
}

void	small_parse_table_733(t_small_parse_table_array *v)
{
	v->a[14660] = 1;
	v->a[14661] = anon_sym_if;
	v->a[14662] = actions(15);
	v->a[14663] = 1;
	v->a[14664] = anon_sym_case;
	v->a[14665] = actions(17);
	v->a[14666] = 1;
	v->a[14667] = anon_sym_LPAREN;
	v->a[14668] = actions(19);
	v->a[14669] = 1;
	v->a[14670] = anon_sym_LBRACE;
	v->a[14671] = actions(43);
	v->a[14672] = 1;
	v->a[14673] = sym_word;
	v->a[14674] = actions(51);
	v->a[14675] = 1;
	v->a[14676] = anon_sym_BANG;
	v->a[14677] = actions(55);
	v->a[14678] = 1;
	v->a[14679] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_734(v);
}

void	small_parse_table_734(t_small_parse_table_array *v)
{
	v->a[14680] = actions(57);
	v->a[14681] = 1;
	v->a[14682] = anon_sym_DOLLAR;
	v->a[14683] = actions(59);
	v->a[14684] = 1;
	v->a[14685] = anon_sym_DQUOTE;
	v->a[14686] = actions(63);
	v->a[14687] = 1;
	v->a[14688] = anon_sym_DOLLAR_LBRACE;
	v->a[14689] = actions(65);
	v->a[14690] = 1;
	v->a[14691] = anon_sym_DOLLAR_LPAREN;
	v->a[14692] = actions(67);
	v->a[14693] = 1;
	v->a[14694] = anon_sym_BQUOTE;
	v->a[14695] = actions(69);
	v->a[14696] = 1;
	v->a[14697] = sym_file_descriptor;
	v->a[14698] = actions(71);
	v->a[14699] = 1;
	small_parse_table_735(v);
}

/* EOF small_parse_table_146.c */
