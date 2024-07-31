/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_346.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1730(t_small_parse_table_array *v)
{
	v->a[34600] = anon_sym_GT_PIPE;
	v->a[34601] = anon_sym_LT_GT;
	v->a[34602] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34603] = anon_sym_DOLLAR;
	v->a[34604] = anon_sym_DQUOTE;
	v->a[34605] = sym_raw_string;
	v->a[34606] = sym_number;
	v->a[34607] = anon_sym_DOLLAR_LBRACE;
	v->a[34608] = anon_sym_DOLLAR_LPAREN;
	v->a[34609] = anon_sym_BQUOTE;
	v->a[34610] = sym_word;
	v->a[34611] = 3;
	v->a[34612] = actions(3);
	v->a[34613] = 1;
	v->a[34614] = sym_comment;
	v->a[34615] = actions(483);
	v->a[34616] = 1;
	v->a[34617] = sym__concat;
	v->a[34618] = actions(481);
	v->a[34619] = 26;
	small_parse_table_1731(v);
}

void	small_parse_table_1731(t_small_parse_table_array *v)
{
	v->a[34620] = anon_sym_esac;
	v->a[34621] = anon_sym_PIPE;
	v->a[34622] = anon_sym_SEMI_SEMI;
	v->a[34623] = anon_sym_AMP_AMP;
	v->a[34624] = anon_sym_PIPE_PIPE;
	v->a[34625] = anon_sym_LT;
	v->a[34626] = anon_sym_GT;
	v->a[34627] = anon_sym_GT_GT;
	v->a[34628] = anon_sym_LT_AMP;
	v->a[34629] = anon_sym_GT_AMP;
	v->a[34630] = anon_sym_GT_PIPE;
	v->a[34631] = anon_sym_LT_GT;
	v->a[34632] = anon_sym_LT_LT;
	v->a[34633] = anon_sym_LT_LT_DASH;
	v->a[34634] = aux_sym_heredoc_redirect_token1;
	v->a[34635] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34636] = aux_sym_concatenation_token1;
	v->a[34637] = anon_sym_DOLLAR;
	v->a[34638] = anon_sym_DQUOTE;
	v->a[34639] = sym_raw_string;
	small_parse_table_1732(v);
}

void	small_parse_table_1732(t_small_parse_table_array *v)
{
	v->a[34640] = sym_number;
	v->a[34641] = anon_sym_DOLLAR_LBRACE;
	v->a[34642] = anon_sym_DOLLAR_LPAREN;
	v->a[34643] = anon_sym_BQUOTE;
	v->a[34644] = sym_word;
	v->a[34645] = anon_sym_SEMI;
	v->a[34646] = 15;
	v->a[34647] = actions(3);
	v->a[34648] = 1;
	v->a[34649] = sym_comment;
	v->a[34650] = actions(25);
	v->a[34651] = 1;
	v->a[34652] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34653] = actions(27);
	v->a[34654] = 1;
	v->a[34655] = anon_sym_DOLLAR;
	v->a[34656] = actions(29);
	v->a[34657] = 1;
	v->a[34658] = anon_sym_DQUOTE;
	v->a[34659] = actions(33);
	small_parse_table_1733(v);
}

void	small_parse_table_1733(t_small_parse_table_array *v)
{
	v->a[34660] = 1;
	v->a[34661] = anon_sym_DOLLAR_LBRACE;
	v->a[34662] = actions(35);
	v->a[34663] = 1;
	v->a[34664] = anon_sym_DOLLAR_LPAREN;
	v->a[34665] = actions(37);
	v->a[34666] = 1;
	v->a[34667] = anon_sym_BQUOTE;
	v->a[34668] = actions(341);
	v->a[34669] = 1;
	v->a[34670] = sym_variable_name;
	v->a[34671] = state(198);
	v->a[34672] = 1;
	v->a[34673] = sym_command_name;
	v->a[34674] = state(569);
	v->a[34675] = 1;
	v->a[34676] = sym_concatenation;
	v->a[34677] = state(1073);
	v->a[34678] = 1;
	v->a[34679] = sym_file_redirect;
	small_parse_table_1734(v);
}

void	small_parse_table_1734(t_small_parse_table_array *v)
{
	v->a[34680] = state(823);
	v->a[34681] = 2;
	v->a[34682] = sym_variable_assignment;
	v->a[34683] = aux_sym_command_repeat1;
	v->a[34684] = actions(31);
	v->a[34685] = 3;
	v->a[34686] = sym_raw_string;
	v->a[34687] = sym_number;
	v->a[34688] = sym_word;
	v->a[34689] = state(329);
	v->a[34690] = 5;
	v->a[34691] = sym_arithmetic_expansion;
	v->a[34692] = sym_string;
	v->a[34693] = sym_simple_expansion;
	v->a[34694] = sym_expansion;
	v->a[34695] = sym_command_substitution;
	v->a[34696] = actions(965);
	v->a[34697] = 7;
	v->a[34698] = anon_sym_LT;
	v->a[34699] = anon_sym_GT;
	small_parse_table_1735(v);
}

/* EOF small_parse_table_346.c */
