/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1775.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8875(t_small_parse_table_array *v)
{
	v->a[177500] = sym_comment;
	v->a[177501] = actions(1241);
	v->a[177502] = 1;
	v->a[177503] = sym_file_descriptor;
	v->a[177504] = actions(3791);
	v->a[177505] = 1;
	v->a[177506] = anon_sym_DQUOTE;
	v->a[177507] = actions(7444);
	v->a[177508] = 1;
	v->a[177509] = sym_variable_name;
	v->a[177510] = state(4389);
	v->a[177511] = 1;
	v->a[177512] = sym_string;
	v->a[177513] = actions(7442);
	v->a[177514] = 2;
	v->a[177515] = aux_sym__simple_variable_name_token1;
	v->a[177516] = aux_sym__multiline_variable_name_token1;
	v->a[177517] = actions(7440);
	v->a[177518] = 9;
	v->a[177519] = anon_sym_DASH;
	small_parse_table_8876(v);
}

void	small_parse_table_8876(t_small_parse_table_array *v)
{
	v->a[177520] = anon_sym_STAR;
	v->a[177521] = anon_sym_BANG;
	v->a[177522] = anon_sym_QMARK;
	v->a[177523] = anon_sym_DOLLAR;
	v->a[177524] = anon_sym_POUND;
	v->a[177525] = anon_sym_AT2;
	v->a[177526] = anon_sym_0;
	v->a[177527] = anon_sym__;
	v->a[177528] = actions(1239);
	v->a[177529] = 21;
	v->a[177530] = anon_sym_SEMI;
	v->a[177531] = anon_sym_PIPE_PIPE;
	v->a[177532] = anon_sym_AMP_AMP;
	v->a[177533] = anon_sym_PIPE;
	v->a[177534] = anon_sym_AMP;
	v->a[177535] = anon_sym_LT;
	v->a[177536] = anon_sym_GT;
	v->a[177537] = anon_sym_LT_LT;
	v->a[177538] = anon_sym_GT_GT;
	v->a[177539] = anon_sym_SEMI_SEMI;
	small_parse_table_8877(v);
}

void	small_parse_table_8877(t_small_parse_table_array *v)
{
	v->a[177540] = anon_sym_PIPE_AMP;
	v->a[177541] = anon_sym_AMP_GT;
	v->a[177542] = anon_sym_AMP_GT_GT;
	v->a[177543] = anon_sym_LT_AMP;
	v->a[177544] = anon_sym_GT_AMP;
	v->a[177545] = anon_sym_GT_PIPE;
	v->a[177546] = anon_sym_LT_AMP_DASH;
	v->a[177547] = anon_sym_GT_AMP_DASH;
	v->a[177548] = anon_sym_LT_LT_DASH;
	v->a[177549] = aux_sym_heredoc_redirect_token1;
	v->a[177550] = anon_sym_LT_LT_LT;
	v->a[177551] = 18;
	v->a[177552] = actions(71);
	v->a[177553] = 1;
	v->a[177554] = sym_comment;
	v->a[177555] = actions(6807);
	v->a[177556] = 1;
	v->a[177557] = anon_sym_EQ;
	v->a[177558] = actions(7607);
	v->a[177559] = 1;
	small_parse_table_8878(v);
}

void	small_parse_table_8878(t_small_parse_table_array *v)
{
	v->a[177560] = anon_sym_STAR_STAR;
	v->a[177561] = actions(7647);
	v->a[177562] = 1;
	v->a[177563] = sym_test_operator;
	v->a[177564] = actions(7687);
	v->a[177565] = 1;
	v->a[177566] = anon_sym_PIPE_PIPE;
	v->a[177567] = actions(7689);
	v->a[177568] = 1;
	v->a[177569] = anon_sym_AMP_AMP;
	v->a[177570] = actions(7691);
	v->a[177571] = 1;
	v->a[177572] = anon_sym_PIPE;
	v->a[177573] = actions(7693);
	v->a[177574] = 1;
	v->a[177575] = anon_sym_CARET;
	v->a[177576] = actions(7695);
	v->a[177577] = 1;
	v->a[177578] = anon_sym_AMP;
	v->a[177579] = actions(7703);
	small_parse_table_8879(v);
}

void	small_parse_table_8879(t_small_parse_table_array *v)
{
	v->a[177580] = 1;
	v->a[177581] = anon_sym_QMARK;
	v->a[177582] = actions(6793);
	v->a[177583] = 2;
	v->a[177584] = anon_sym_PLUS_PLUS;
	v->a[177585] = anon_sym_DASH_DASH;
	v->a[177586] = actions(7601);
	v->a[177587] = 2;
	v->a[177588] = anon_sym_LT_LT;
	v->a[177589] = anon_sym_GT_GT;
	v->a[177590] = actions(7603);
	v->a[177591] = 2;
	v->a[177592] = anon_sym_PLUS;
	v->a[177593] = anon_sym_DASH;
	v->a[177594] = actions(7697);
	v->a[177595] = 2;
	v->a[177596] = anon_sym_EQ_EQ;
	v->a[177597] = anon_sym_BANG_EQ;
	v->a[177598] = actions(7699);
	v->a[177599] = 2;
	small_parse_table_8880(v);
}

/* EOF small_parse_table_1775.c */
