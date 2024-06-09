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
	v->a[14601] = anon_sym_DQUOTE;
	v->a[14602] = actions(71);
	v->a[14603] = 1;
	v->a[14604] = aux_sym_number_token1;
	v->a[14605] = actions(73);
	v->a[14606] = 1;
	v->a[14607] = aux_sym_number_token2;
	v->a[14608] = actions(75);
	v->a[14609] = 1;
	v->a[14610] = anon_sym_DOLLAR_LBRACE;
	v->a[14611] = actions(77);
	v->a[14612] = 1;
	v->a[14613] = anon_sym_DOLLAR_LPAREN;
	v->a[14614] = actions(79);
	v->a[14615] = 1;
	v->a[14616] = anon_sym_BQUOTE;
	v->a[14617] = actions(248);
	v->a[14618] = 1;
	v->a[14619] = sym_word;
	small_parse_table_731(v);
}

void	small_parse_table_731(t_small_parse_table_array *v)
{
	v->a[14620] = actions(250);
	v->a[14621] = 1;
	v->a[14622] = anon_sym_BANG;
	v->a[14623] = actions(256);
	v->a[14624] = 1;
	v->a[14625] = sym_raw_string;
	v->a[14626] = actions(258);
	v->a[14627] = 1;
	v->a[14628] = sym_file_descriptor;
	v->a[14629] = actions(260);
	v->a[14630] = 1;
	v->a[14631] = sym_variable_name;
	v->a[14632] = state(141);
	v->a[14633] = 1;
	v->a[14634] = aux_sym__statements_repeat1;
	v->a[14635] = state(175);
	v->a[14636] = 1;
	v->a[14637] = sym_command_name;
	v->a[14638] = state(278);
	v->a[14639] = 1;
	small_parse_table_732(v);
}

void	small_parse_table_732(t_small_parse_table_array *v)
{
	v->a[14640] = sym_variable_assignment;
	v->a[14641] = state(567);
	v->a[14642] = 1;
	v->a[14643] = aux_sym_command_repeat1;
	v->a[14644] = state(582);
	v->a[14645] = 1;
	v->a[14646] = sym_concatenation;
	v->a[14647] = state(708);
	v->a[14648] = 1;
	v->a[14649] = sym_file_redirect;
	v->a[14650] = state(1100);
	v->a[14651] = 1;
	v->a[14652] = sym_pipeline;
	v->a[14653] = state(1196);
	v->a[14654] = 1;
	v->a[14655] = aux_sym_redirected_statement_repeat2;
	v->a[14656] = state(2037);
	v->a[14657] = 1;
	v->a[14658] = sym__statement_not_pipeline;
	v->a[14659] = state(2146);
	small_parse_table_733(v);
}

void	small_parse_table_733(t_small_parse_table_array *v)
{
	v->a[14660] = 1;
	v->a[14661] = sym__statements;
	v->a[14662] = actions(11);
	v->a[14663] = 2;
	v->a[14664] = anon_sym_while;
	v->a[14665] = anon_sym_until;
	v->a[14666] = actions(254);
	v->a[14667] = 2;
	v->a[14668] = anon_sym_LT_AMP_DASH;
	v->a[14669] = anon_sym_GT_AMP_DASH;
	v->a[14670] = state(295);
	v->a[14671] = 6;
	v->a[14672] = sym_arithmetic_expansion;
	v->a[14673] = sym_string;
	v->a[14674] = sym_number;
	v->a[14675] = sym_simple_expansion;
	v->a[14676] = sym_expansion;
	v->a[14677] = sym_command_substitution;
	v->a[14678] = actions(252);
	v->a[14679] = 8;
	small_parse_table_734(v);
}

void	small_parse_table_734(t_small_parse_table_array *v)
{
	v->a[14680] = anon_sym_LT;
	v->a[14681] = anon_sym_GT;
	v->a[14682] = anon_sym_GT_GT;
	v->a[14683] = anon_sym_AMP_GT;
	v->a[14684] = anon_sym_AMP_GT_GT;
	v->a[14685] = anon_sym_LT_AMP;
	v->a[14686] = anon_sym_GT_AMP;
	v->a[14687] = anon_sym_GT_PIPE;
	v->a[14688] = state(1031);
	v->a[14689] = 12;
	v->a[14690] = sym_redirected_statement;
	v->a[14691] = sym_for_statement;
	v->a[14692] = sym_while_statement;
	v->a[14693] = sym_if_statement;
	v->a[14694] = sym_case_statement;
	v->a[14695] = sym_function_definition;
	v->a[14696] = sym_compound_statement;
	v->a[14697] = sym_subshell;
	v->a[14698] = sym_list;
	v->a[14699] = sym_negated_command;
	small_parse_table_735(v);
}

/* EOF small_parse_table_146.c */
