/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2716.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13580(t_small_parse_table_array *v)
{
	v->a[271600] = state(6551);
	v->a[271601] = 1;
	v->a[271602] = sym__c_expression;
	v->a[271603] = state(6762);
	v->a[271604] = 1;
	v->a[271605] = sym__c_variable_assignment;
	v->a[271606] = actions(12165);
	v->a[271607] = 2;
	v->a[271608] = anon_sym_PLUS_PLUS;
	v->a[271609] = anon_sym_DASH_DASH;
	v->a[271610] = state(3441);
	v->a[271611] = 7;
	v->a[271612] = sym__c_expression_not_assignment;
	v->a[271613] = sym__c_parenthesized_expression;
	v->a[271614] = sym_string;
	v->a[271615] = sym_number;
	v->a[271616] = sym_simple_expansion;
	v->a[271617] = sym_expansion;
	v->a[271618] = sym_command_substitution;
	v->a[271619] = 3;
	small_parse_table_13581(v);
}

void	small_parse_table_13581(t_small_parse_table_array *v)
{
	v->a[271620] = actions(3);
	v->a[271621] = 1;
	v->a[271622] = sym_comment;
	v->a[271623] = actions(12036);
	v->a[271624] = 2;
	v->a[271625] = sym_file_descriptor;
	v->a[271626] = aux_sym_heredoc_redirect_token1;
	v->a[271627] = actions(12034);
	v->a[271628] = 22;
	v->a[271629] = anon_sym_SEMI;
	v->a[271630] = anon_sym_PIPE_PIPE;
	v->a[271631] = anon_sym_AMP_AMP;
	v->a[271632] = anon_sym_PIPE;
	v->a[271633] = anon_sym_AMP;
	v->a[271634] = anon_sym_LT;
	v->a[271635] = anon_sym_GT;
	v->a[271636] = anon_sym_LT_LT;
	v->a[271637] = anon_sym_GT_GT;
	v->a[271638] = anon_sym_esac;
	v->a[271639] = anon_sym_SEMI_SEMI;
	small_parse_table_13582(v);
}

void	small_parse_table_13582(t_small_parse_table_array *v)
{
	v->a[271640] = anon_sym_SEMI_AMP;
	v->a[271641] = anon_sym_SEMI_SEMI_AMP;
	v->a[271642] = anon_sym_PIPE_AMP;
	v->a[271643] = anon_sym_AMP_GT;
	v->a[271644] = anon_sym_AMP_GT_GT;
	v->a[271645] = anon_sym_LT_AMP;
	v->a[271646] = anon_sym_GT_AMP;
	v->a[271647] = anon_sym_GT_PIPE;
	v->a[271648] = anon_sym_LT_AMP_DASH;
	v->a[271649] = anon_sym_GT_AMP_DASH;
	v->a[271650] = anon_sym_LT_LT_DASH;
	v->a[271651] = 3;
	v->a[271652] = actions(3);
	v->a[271653] = 1;
	v->a[271654] = sym_comment;
	v->a[271655] = actions(12263);
	v->a[271656] = 3;
	v->a[271657] = sym_file_descriptor;
	v->a[271658] = ts_builtin_sym_end;
	v->a[271659] = aux_sym_heredoc_redirect_token1;
	small_parse_table_13583(v);
}

void	small_parse_table_13583(t_small_parse_table_array *v)
{
	v->a[271660] = actions(12261);
	v->a[271661] = 21;
	v->a[271662] = anon_sym_SEMI;
	v->a[271663] = anon_sym_PIPE_PIPE;
	v->a[271664] = anon_sym_AMP_AMP;
	v->a[271665] = anon_sym_PIPE;
	v->a[271666] = anon_sym_AMP;
	v->a[271667] = anon_sym_LT;
	v->a[271668] = anon_sym_GT;
	v->a[271669] = anon_sym_LT_LT;
	v->a[271670] = anon_sym_GT_GT;
	v->a[271671] = anon_sym_RPAREN;
	v->a[271672] = anon_sym_SEMI_SEMI;
	v->a[271673] = anon_sym_PIPE_AMP;
	v->a[271674] = anon_sym_AMP_GT;
	v->a[271675] = anon_sym_AMP_GT_GT;
	v->a[271676] = anon_sym_LT_AMP;
	v->a[271677] = anon_sym_GT_AMP;
	v->a[271678] = anon_sym_GT_PIPE;
	v->a[271679] = anon_sym_LT_AMP_DASH;
	small_parse_table_13584(v);
}

void	small_parse_table_13584(t_small_parse_table_array *v)
{
	v->a[271680] = anon_sym_GT_AMP_DASH;
	v->a[271681] = anon_sym_LT_LT_DASH;
	v->a[271682] = anon_sym_BQUOTE;
	v->a[271683] = 3;
	v->a[271684] = actions(3);
	v->a[271685] = 1;
	v->a[271686] = sym_comment;
	v->a[271687] = actions(11727);
	v->a[271688] = 2;
	v->a[271689] = sym_file_descriptor;
	v->a[271690] = aux_sym_heredoc_redirect_token1;
	v->a[271691] = actions(11725);
	v->a[271692] = 22;
	v->a[271693] = anon_sym_SEMI;
	v->a[271694] = anon_sym_PIPE_PIPE;
	v->a[271695] = anon_sym_AMP_AMP;
	v->a[271696] = anon_sym_PIPE;
	v->a[271697] = anon_sym_AMP;
	v->a[271698] = anon_sym_LT;
	v->a[271699] = anon_sym_GT;
	small_parse_table_13585(v);
}

/* EOF small_parse_table_2716.c */
