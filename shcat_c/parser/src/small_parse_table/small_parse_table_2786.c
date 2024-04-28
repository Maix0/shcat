/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2786.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13930(t_small_parse_table_array *v)
{
	v->a[278600] = anon_sym_DOLLAR_BQUOTE;
	v->a[278601] = actions(12563);
	v->a[278602] = 1;
	v->a[278603] = aux_sym_heredoc_redirect_token1;
	v->a[278604] = actions(12565);
	v->a[278605] = 1;
	v->a[278606] = anon_sym_RBRACE3;
	v->a[278607] = actions(12567);
	v->a[278608] = 1;
	v->a[278609] = aux_sym__simple_variable_name_token1;
	v->a[278610] = state(5458);
	v->a[278611] = 1;
	v->a[278612] = sym_simple_expansion;
	v->a[278613] = state(6256);
	v->a[278614] = 1;
	v->a[278615] = sym__expansion_max_length_binary_expression;
	v->a[278616] = state(6470);
	v->a[278617] = 1;
	v->a[278618] = sym__expansion_max_length_expression;
	v->a[278619] = actions(12541);
	small_parse_table_13931(v);
}

void	small_parse_table_13931(t_small_parse_table_array *v)
{
	v->a[278620] = 2;
	v->a[278621] = anon_sym_LPAREN_LPAREN;
	v->a[278622] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[278623] = state(6344);
	v->a[278624] = 2;
	v->a[278625] = sym_number;
	v->a[278626] = sym_expansion;
	v->a[278627] = state(6977);
	v->a[278628] = 3;
	v->a[278629] = sym_parenthesized_expression;
	v->a[278630] = sym_arithmetic_expansion;
	v->a[278631] = sym_command_substitution;
	v->a[278632] = 6;
	v->a[278633] = actions(71);
	v->a[278634] = 1;
	v->a[278635] = sym_comment;
	v->a[278636] = actions(12473);
	v->a[278637] = 1;
	v->a[278638] = anon_sym_LT_LT_LT;
	v->a[278639] = state(5679);
	small_parse_table_13932(v);
}

void	small_parse_table_13932(t_small_parse_table_array *v)
{
	v->a[278640] = 1;
	v->a[278641] = sym_herestring_redirect;
	v->a[278642] = state(5436);
	v->a[278643] = 3;
	v->a[278644] = sym_file_redirect;
	v->a[278645] = sym_heredoc_redirect;
	v->a[278646] = aux_sym_redirected_statement_repeat1;
	v->a[278647] = actions(4253);
	v->a[278648] = 7;
	v->a[278649] = anon_sym_PIPE;
	v->a[278650] = anon_sym_LT;
	v->a[278651] = anon_sym_GT;
	v->a[278652] = anon_sym_LT_LT;
	v->a[278653] = anon_sym_AMP_GT;
	v->a[278654] = anon_sym_LT_AMP;
	v->a[278655] = anon_sym_GT_AMP;
	v->a[278656] = actions(4348);
	v->a[278657] = 10;
	v->a[278658] = sym_file_descriptor;
	v->a[278659] = anon_sym_PIPE_PIPE;
	small_parse_table_13933(v);
}

void	small_parse_table_13933(t_small_parse_table_array *v)
{
	v->a[278660] = anon_sym_AMP_AMP;
	v->a[278661] = anon_sym_GT_GT;
	v->a[278662] = anon_sym_PIPE_AMP;
	v->a[278663] = anon_sym_AMP_GT_GT;
	v->a[278664] = anon_sym_GT_PIPE;
	v->a[278665] = anon_sym_LT_AMP_DASH;
	v->a[278666] = anon_sym_GT_AMP_DASH;
	v->a[278667] = anon_sym_LT_LT_DASH;
	v->a[278668] = 16;
	v->a[278669] = actions(71);
	v->a[278670] = 1;
	v->a[278671] = sym_comment;
	v->a[278672] = actions(11808);
	v->a[278673] = 1;
	v->a[278674] = anon_sym_LPAREN;
	v->a[278675] = actions(11812);
	v->a[278676] = 1;
	v->a[278677] = anon_sym_DOLLAR;
	v->a[278678] = actions(11814);
	v->a[278679] = 1;
	small_parse_table_13934(v);
}

void	small_parse_table_13934(t_small_parse_table_array *v)
{
	v->a[278680] = anon_sym_DQUOTE;
	v->a[278681] = actions(11816);
	v->a[278682] = 1;
	v->a[278683] = aux_sym_number_token1;
	v->a[278684] = actions(11818);
	v->a[278685] = 1;
	v->a[278686] = aux_sym_number_token2;
	v->a[278687] = actions(11820);
	v->a[278688] = 1;
	v->a[278689] = anon_sym_DOLLAR_LBRACE;
	v->a[278690] = actions(11822);
	v->a[278691] = 1;
	v->a[278692] = anon_sym_DOLLAR_LPAREN;
	v->a[278693] = actions(11824);
	v->a[278694] = 1;
	v->a[278695] = anon_sym_BQUOTE;
	v->a[278696] = actions(11826);
	v->a[278697] = 1;
	v->a[278698] = anon_sym_DOLLAR_BQUOTE;
	v->a[278699] = actions(12569);
	small_parse_table_13935(v);
}

/* EOF small_parse_table_2786.c */
