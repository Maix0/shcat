/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_196.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_980(t_small_parse_table_array *v)
{
	v->a[19600] = sym_raw_string;
	v->a[19601] = sym_number;
	v->a[19602] = sym_word;
	v->a[19603] = actions(780);
	v->a[19604] = 3;
	v->a[19605] = anon_sym_SEMI_SEMI;
	v->a[19606] = aux_sym_heredoc_redirect_token1;
	v->a[19607] = anon_sym_SEMI;
	v->a[19608] = state(1468);
	v->a[19609] = 5;
	v->a[19610] = sym_arithmetic_expansion;
	v->a[19611] = sym_string;
	v->a[19612] = sym_simple_expansion;
	v->a[19613] = sym_expansion;
	v->a[19614] = sym_command_substitution;
	v->a[19615] = 7;
	v->a[19616] = actions(3);
	v->a[19617] = 1;
	v->a[19618] = sym_comment;
	v->a[19619] = actions(580);
	small_parse_table_981(v);
}

void	small_parse_table_981(t_small_parse_table_array *v)
{
	v->a[19620] = 1;
	v->a[19621] = anon_sym_PIPE;
	v->a[19622] = actions(588);
	v->a[19623] = 1;
	v->a[19624] = sym_variable_name;
	v->a[19625] = state(970);
	v->a[19626] = 2;
	v->a[19627] = sym_variable_assignment;
	v->a[19628] = aux_sym__variable_assignments_repeat1;
	v->a[19629] = state(971);
	v->a[19630] = 3;
	v->a[19631] = sym_file_redirect;
	v->a[19632] = sym_heredoc_redirect;
	v->a[19633] = aux_sym_redirected_statement_repeat1;
	v->a[19634] = actions(816);
	v->a[19635] = 7;
	v->a[19636] = anon_sym_esac;
	v->a[19637] = anon_sym_SEMI_SEMI;
	v->a[19638] = anon_sym_AMP_AMP;
	v->a[19639] = anon_sym_PIPE_PIPE;
	small_parse_table_982(v);
}

void	small_parse_table_982(t_small_parse_table_array *v)
{
	v->a[19640] = anon_sym_LT_LT;
	v->a[19641] = aux_sym_heredoc_redirect_token1;
	v->a[19642] = anon_sym_SEMI;
	v->a[19643] = actions(576);
	v->a[19644] = 12;
	v->a[19645] = anon_sym_LT;
	v->a[19646] = anon_sym_GT;
	v->a[19647] = anon_sym_GT_GT;
	v->a[19648] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19649] = anon_sym_DOLLAR;
	v->a[19650] = anon_sym_DQUOTE;
	v->a[19651] = sym_raw_string;
	v->a[19652] = sym_number;
	v->a[19653] = anon_sym_DOLLAR_LBRACE;
	v->a[19654] = anon_sym_DOLLAR_LPAREN;
	v->a[19655] = anon_sym_BQUOTE;
	v->a[19656] = sym_word;
	v->a[19657] = 19;
	v->a[19658] = actions(3);
	v->a[19659] = 1;
	small_parse_table_983(v);
}

void	small_parse_table_983(t_small_parse_table_array *v)
{
	v->a[19660] = sym_comment;
	v->a[19661] = actions(89);
	v->a[19662] = 1;
	v->a[19663] = anon_sym_LPAREN;
	v->a[19664] = actions(99);
	v->a[19665] = 1;
	v->a[19666] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19667] = actions(101);
	v->a[19668] = 1;
	v->a[19669] = anon_sym_DOLLAR;
	v->a[19670] = actions(103);
	v->a[19671] = 1;
	v->a[19672] = anon_sym_DQUOTE;
	v->a[19673] = actions(107);
	v->a[19674] = 1;
	v->a[19675] = anon_sym_DOLLAR_LBRACE;
	v->a[19676] = actions(109);
	v->a[19677] = 1;
	v->a[19678] = anon_sym_DOLLAR_LPAREN;
	v->a[19679] = actions(111);
	small_parse_table_984(v);
}

void	small_parse_table_984(t_small_parse_table_array *v)
{
	v->a[19680] = 1;
	v->a[19681] = anon_sym_BQUOTE;
	v->a[19682] = actions(113);
	v->a[19683] = 1;
	v->a[19684] = sym_variable_name;
	v->a[19685] = state(170);
	v->a[19686] = 1;
	v->a[19687] = sym_command_name;
	v->a[19688] = state(408);
	v->a[19689] = 1;
	v->a[19690] = aux_sym_command_repeat1;
	v->a[19691] = state(545);
	v->a[19692] = 1;
	v->a[19693] = sym_variable_assignment;
	v->a[19694] = state(546);
	v->a[19695] = 1;
	v->a[19696] = sym_concatenation;
	v->a[19697] = state(1083);
	v->a[19698] = 1;
	v->a[19699] = sym_file_redirect;
	small_parse_table_985(v);
}

/* EOF small_parse_table_196.c */
