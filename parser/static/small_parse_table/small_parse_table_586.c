/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_586.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2930(t_small_parse_table_array *v)
{
	v->a[58600] = sym_string;
	v->a[58601] = sym_simple_expansion;
	v->a[58602] = sym_expansion;
	v->a[58603] = sym_command_substitution;
	v->a[58604] = 12;
	v->a[58605] = actions(3);
	v->a[58606] = 1;
	v->a[58607] = sym_comment;
	v->a[58608] = actions(1067);
	v->a[58609] = 1;
	v->a[58610] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58611] = actions(1069);
	v->a[58612] = 1;
	v->a[58613] = anon_sym_DOLLAR;
	v->a[58614] = actions(1071);
	v->a[58615] = 1;
	v->a[58616] = anon_sym_DQUOTE;
	v->a[58617] = actions(1073);
	v->a[58618] = 1;
	v->a[58619] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2931(v);
}

void	small_parse_table_2931(t_small_parse_table_array *v)
{
	v->a[58620] = actions(1075);
	v->a[58621] = 1;
	v->a[58622] = anon_sym_DOLLAR_LPAREN;
	v->a[58623] = actions(1077);
	v->a[58624] = 1;
	v->a[58625] = anon_sym_BQUOTE;
	v->a[58626] = state(1912);
	v->a[58627] = 1;
	v->a[58628] = sym_terminator;
	v->a[58629] = state(1192);
	v->a[58630] = 2;
	v->a[58631] = sym_concatenation;
	v->a[58632] = aux_sym_for_statement_repeat1;
	v->a[58633] = actions(1964);
	v->a[58634] = 3;
	v->a[58635] = sym_raw_string;
	v->a[58636] = sym_number;
	v->a[58637] = sym_word;
	v->a[58638] = actions(1966);
	v->a[58639] = 4;
	small_parse_table_2932(v);
}

void	small_parse_table_2932(t_small_parse_table_array *v)
{
	v->a[58640] = anon_sym_SEMI_SEMI;
	v->a[58641] = aux_sym_heredoc_redirect_token1;
	v->a[58642] = anon_sym_AMP;
	v->a[58643] = anon_sym_SEMI;
	v->a[58644] = state(1412);
	v->a[58645] = 5;
	v->a[58646] = sym_arithmetic_expansion;
	v->a[58647] = sym_string;
	v->a[58648] = sym_simple_expansion;
	v->a[58649] = sym_expansion;
	v->a[58650] = sym_command_substitution;
	v->a[58651] = 3;
	v->a[58652] = actions(3);
	v->a[58653] = 1;
	v->a[58654] = sym_comment;
	v->a[58655] = actions(839);
	v->a[58656] = 4;
	v->a[58657] = sym_file_descriptor;
	v->a[58658] = sym__concat;
	v->a[58659] = sym_variable_name;
	small_parse_table_2933(v);
}

void	small_parse_table_2933(t_small_parse_table_array *v)
{
	v->a[58660] = aux_sym_heredoc_redirect_token1;
	v->a[58661] = actions(837);
	v->a[58662] = 17;
	v->a[58663] = anon_sym_esac;
	v->a[58664] = anon_sym_PIPE;
	v->a[58665] = anon_sym_SEMI_SEMI;
	v->a[58666] = anon_sym_AMP_AMP;
	v->a[58667] = anon_sym_PIPE_PIPE;
	v->a[58668] = anon_sym_LT;
	v->a[58669] = anon_sym_GT;
	v->a[58670] = anon_sym_GT_GT;
	v->a[58671] = anon_sym_LT_AMP;
	v->a[58672] = anon_sym_GT_AMP;
	v->a[58673] = anon_sym_GT_PIPE;
	v->a[58674] = anon_sym_LT_GT;
	v->a[58675] = anon_sym_LT_LT;
	v->a[58676] = anon_sym_LT_LT_DASH;
	v->a[58677] = anon_sym_AMP;
	v->a[58678] = aux_sym_concatenation_token1;
	v->a[58679] = anon_sym_SEMI;
	small_parse_table_2934(v);
}

void	small_parse_table_2934(t_small_parse_table_array *v)
{
	v->a[58680] = 5;
	v->a[58681] = actions(3);
	v->a[58682] = 1;
	v->a[58683] = sym_comment;
	v->a[58684] = actions(1989);
	v->a[58685] = 1;
	v->a[58686] = sym_variable_name;
	v->a[58687] = state(1049);
	v->a[58688] = 2;
	v->a[58689] = sym_variable_assignment;
	v->a[58690] = aux_sym__variable_assignments_repeat1;
	v->a[58691] = actions(1982);
	v->a[58692] = 3;
	v->a[58693] = sym_file_descriptor;
	v->a[58694] = ts_builtin_sym_end;
	v->a[58695] = aux_sym_heredoc_redirect_token1;
	v->a[58696] = actions(1980);
	v->a[58697] = 15;
	v->a[58698] = anon_sym_PIPE;
	v->a[58699] = anon_sym_SEMI_SEMI;
	small_parse_table_2935(v);
}

/* EOF small_parse_table_586.c */
