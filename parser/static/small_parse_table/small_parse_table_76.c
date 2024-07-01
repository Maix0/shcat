/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_76.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_380(t_small_parse_table_array *v)
{
	v->a[7600] = sym_if_statement;
	v->a[7601] = sym_case_statement;
	v->a[7602] = sym_function_definition;
	v->a[7603] = sym_compound_statement;
	v->a[7604] = sym_subshell;
	v->a[7605] = sym_list;
	v->a[7606] = sym_negated_command;
	v->a[7607] = sym_command;
	v->a[7608] = sym__variable_assignments;
	v->a[7609] = 31;
	v->a[7610] = actions(3);
	v->a[7611] = 1;
	v->a[7612] = sym_comment;
	v->a[7613] = actions(9);
	v->a[7614] = 1;
	v->a[7615] = anon_sym_for;
	v->a[7616] = actions(13);
	v->a[7617] = 1;
	v->a[7618] = anon_sym_if;
	v->a[7619] = actions(15);
	small_parse_table_381(v);
}

void	small_parse_table_381(t_small_parse_table_array *v)
{
	v->a[7620] = 1;
	v->a[7621] = anon_sym_case;
	v->a[7622] = actions(17);
	v->a[7623] = 1;
	v->a[7624] = anon_sym_LPAREN;
	v->a[7625] = actions(19);
	v->a[7626] = 1;
	v->a[7627] = anon_sym_LBRACE;
	v->a[7628] = actions(43);
	v->a[7629] = 1;
	v->a[7630] = sym_word;
	v->a[7631] = actions(51);
	v->a[7632] = 1;
	v->a[7633] = anon_sym_BANG;
	v->a[7634] = actions(55);
	v->a[7635] = 1;
	v->a[7636] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7637] = actions(57);
	v->a[7638] = 1;
	v->a[7639] = anon_sym_DOLLAR;
	small_parse_table_382(v);
}

void	small_parse_table_382(t_small_parse_table_array *v)
{
	v->a[7640] = actions(59);
	v->a[7641] = 1;
	v->a[7642] = anon_sym_DQUOTE;
	v->a[7643] = actions(63);
	v->a[7644] = 1;
	v->a[7645] = anon_sym_DOLLAR_LBRACE;
	v->a[7646] = actions(65);
	v->a[7647] = 1;
	v->a[7648] = anon_sym_DOLLAR_LPAREN;
	v->a[7649] = actions(67);
	v->a[7650] = 1;
	v->a[7651] = anon_sym_BQUOTE;
	v->a[7652] = actions(69);
	v->a[7653] = 1;
	v->a[7654] = sym_file_descriptor;
	v->a[7655] = actions(71);
	v->a[7656] = 1;
	v->a[7657] = sym_variable_name;
	v->a[7658] = actions(241);
	v->a[7659] = 1;
	small_parse_table_383(v);
}

void	small_parse_table_383(t_small_parse_table_array *v)
{
	v->a[7660] = anon_sym_RBRACE;
	v->a[7661] = state(74);
	v->a[7662] = 1;
	v->a[7663] = aux_sym__terminated_statement;
	v->a[7664] = state(183);
	v->a[7665] = 1;
	v->a[7666] = sym_command_name;
	v->a[7667] = state(320);
	v->a[7668] = 1;
	v->a[7669] = sym_variable_assignment;
	v->a[7670] = state(603);
	v->a[7671] = 1;
	v->a[7672] = sym_concatenation;
	v->a[7673] = state(639);
	v->a[7674] = 1;
	v->a[7675] = aux_sym_command_repeat1;
	v->a[7676] = state(644);
	v->a[7677] = 1;
	v->a[7678] = sym_file_redirect;
	v->a[7679] = state(1160);
	small_parse_table_384(v);
}

void	small_parse_table_384(t_small_parse_table_array *v)
{
	v->a[7680] = 1;
	v->a[7681] = sym_pipeline;
	v->a[7682] = state(1196);
	v->a[7683] = 1;
	v->a[7684] = aux_sym_redirected_statement_repeat2;
	v->a[7685] = state(1910);
	v->a[7686] = 1;
	v->a[7687] = sym__statement_not_pipeline;
	v->a[7688] = actions(11);
	v->a[7689] = 2;
	v->a[7690] = anon_sym_while;
	v->a[7691] = anon_sym_until;
	v->a[7692] = actions(61);
	v->a[7693] = 2;
	v->a[7694] = sym_raw_string;
	v->a[7695] = sym_number;
	v->a[7696] = state(436);
	v->a[7697] = 5;
	v->a[7698] = sym_arithmetic_expansion;
	v->a[7699] = sym_string;
	small_parse_table_385(v);
}

/* EOF small_parse_table_76.c */
