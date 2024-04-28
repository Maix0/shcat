/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2606.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13030(t_small_parse_table_array *v)
{
	v->a[260600] = anon_sym_AMP_AMP;
	v->a[260601] = anon_sym_PIPE;
	v->a[260602] = anon_sym_AMP;
	v->a[260603] = anon_sym_LT;
	v->a[260604] = anon_sym_GT;
	v->a[260605] = anon_sym_LT_LT;
	v->a[260606] = anon_sym_GT_GT;
	v->a[260607] = anon_sym_RPAREN;
	v->a[260608] = anon_sym_SEMI_SEMI;
	v->a[260609] = anon_sym_PIPE_AMP;
	v->a[260610] = anon_sym_AMP_GT;
	v->a[260611] = anon_sym_AMP_GT_GT;
	v->a[260612] = anon_sym_LT_AMP;
	v->a[260613] = anon_sym_GT_AMP;
	v->a[260614] = anon_sym_GT_PIPE;
	v->a[260615] = anon_sym_LT_AMP_DASH;
	v->a[260616] = anon_sym_GT_AMP_DASH;
	v->a[260617] = anon_sym_LT_LT_DASH;
	v->a[260618] = anon_sym_LT_LT_LT;
	v->a[260619] = anon_sym_BQUOTE;
	small_parse_table_13031(v);
}

void	small_parse_table_13031(t_small_parse_table_array *v)
{
	v->a[260620] = 16;
	v->a[260621] = actions(3);
	v->a[260622] = 1;
	v->a[260623] = sym_comment;
	v->a[260624] = actions(11760);
	v->a[260625] = 1;
	v->a[260626] = anon_sym_BANG2;
	v->a[260627] = actions(11764);
	v->a[260628] = 1;
	v->a[260629] = anon_sym_DOLLAR_LPAREN;
	v->a[260630] = actions(11766);
	v->a[260631] = 1;
	v->a[260632] = anon_sym_BQUOTE;
	v->a[260633] = actions(11768);
	v->a[260634] = 1;
	v->a[260635] = anon_sym_DOLLAR_BQUOTE;
	v->a[260636] = actions(11770);
	v->a[260637] = 1;
	v->a[260638] = aux_sym__simple_variable_name_token1;
	v->a[260639] = actions(11772);
	small_parse_table_13032(v);
}

void	small_parse_table_13032(t_small_parse_table_array *v)
{
	v->a[260640] = 1;
	v->a[260641] = sym_variable_name;
	v->a[260642] = actions(11979);
	v->a[260643] = 1;
	v->a[260644] = anon_sym_RBRACE3;
	v->a[260645] = state(3532);
	v->a[260646] = 1;
	v->a[260647] = sym_subscript;
	v->a[260648] = state(6428);
	v->a[260649] = 1;
	v->a[260650] = aux_sym__expansion_body_repeat1;
	v->a[260651] = state(6472);
	v->a[260652] = 1;
	v->a[260653] = sym_command_substitution;
	v->a[260654] = state(7386);
	v->a[260655] = 1;
	v->a[260656] = sym__expansion_body;
	v->a[260657] = actions(11762);
	v->a[260658] = 2;
	v->a[260659] = anon_sym_POUND2;
	small_parse_table_13033(v);
}

void	small_parse_table_13033(t_small_parse_table_array *v)
{
	v->a[260660] = anon_sym_EQ2;
	v->a[260661] = actions(8050);
	v->a[260662] = 3;
	v->a[260663] = sym__external_expansion_sym_hash;
	v->a[260664] = sym__external_expansion_sym_bang;
	v->a[260665] = sym__external_expansion_sym_equal;
	v->a[260666] = actions(11754);
	v->a[260667] = 4;
	v->a[260668] = anon_sym_DASH;
	v->a[260669] = anon_sym_STAR;
	v->a[260670] = anon_sym_QMARK;
	v->a[260671] = anon_sym_AT2;
	v->a[260672] = actions(11756);
	v->a[260673] = 5;
	v->a[260674] = anon_sym_BANG;
	v->a[260675] = anon_sym_DOLLAR;
	v->a[260676] = anon_sym_POUND;
	v->a[260677] = anon_sym_0;
	v->a[260678] = anon_sym__;
	v->a[260679] = 16;
	small_parse_table_13034(v);
}

void	small_parse_table_13034(t_small_parse_table_array *v)
{
	v->a[260680] = actions(3);
	v->a[260681] = 1;
	v->a[260682] = sym_comment;
	v->a[260683] = actions(11760);
	v->a[260684] = 1;
	v->a[260685] = anon_sym_BANG2;
	v->a[260686] = actions(11764);
	v->a[260687] = 1;
	v->a[260688] = anon_sym_DOLLAR_LPAREN;
	v->a[260689] = actions(11766);
	v->a[260690] = 1;
	v->a[260691] = anon_sym_BQUOTE;
	v->a[260692] = actions(11768);
	v->a[260693] = 1;
	v->a[260694] = anon_sym_DOLLAR_BQUOTE;
	v->a[260695] = actions(11770);
	v->a[260696] = 1;
	v->a[260697] = aux_sym__simple_variable_name_token1;
	v->a[260698] = actions(11772);
	v->a[260699] = 1;
	small_parse_table_13035(v);
}

/* EOF small_parse_table_2606.c */
