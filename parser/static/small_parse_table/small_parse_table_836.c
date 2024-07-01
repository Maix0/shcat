/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_836.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4180(t_small_parse_table_array *v)
{
	v->a[83600] = 1;
	v->a[83601] = sym_comment;
	v->a[83602] = actions(4111);
	v->a[83603] = 1;
	v->a[83604] = anon_sym_BQUOTE;
	v->a[83605] = 2;
	v->a[83606] = actions(664);
	v->a[83607] = 1;
	v->a[83608] = sym_comment;
	v->a[83609] = actions(4113);
	v->a[83610] = 1;
	v->a[83611] = anon_sym_RPAREN;
	v->a[83612] = 2;
	v->a[83613] = actions(664);
	v->a[83614] = 1;
	v->a[83615] = sym_comment;
	v->a[83616] = actions(4115);
	v->a[83617] = 1;
	v->a[83618] = anon_sym_RBRACE;
	v->a[83619] = 2;
	small_parse_table_4181(v);
}

void	small_parse_table_4181(t_small_parse_table_array *v)
{
	v->a[83620] = actions(664);
	v->a[83621] = 1;
	v->a[83622] = sym_comment;
	v->a[83623] = actions(4117);
	v->a[83624] = 1;
	v->a[83625] = anon_sym_RPAREN;
	v->a[83626] = 2;
	v->a[83627] = actions(664);
	v->a[83628] = 1;
	v->a[83629] = sym_comment;
	v->a[83630] = actions(4119);
	v->a[83631] = 1;
	v->a[83632] = anon_sym_BQUOTE;
	v->a[83633] = 2;
	v->a[83634] = actions(664);
	v->a[83635] = 1;
	v->a[83636] = sym_comment;
	v->a[83637] = actions(4121);
	v->a[83638] = 1;
	v->a[83639] = ts_builtin_sym_end;
	small_parse_table_4182(v);
}

void	small_parse_table_4182(t_small_parse_table_array *v)
{
	v->a[83640] = 2;
	v->a[83641] = actions(664);
	v->a[83642] = 1;
	v->a[83643] = sym_comment;
	v->a[83644] = actions(4123);
	v->a[83645] = 1;
	v->a[83646] = ts_builtin_sym_end;
	v->a[83647] = 2;
	v->a[83648] = actions(664);
	v->a[83649] = 1;
	v->a[83650] = sym_comment;
	v->a[83651] = actions(4125);
	v->a[83652] = 1;
	v->a[83653] = aux_sym__simple_variable_name_token1;
}

/* EOF small_parse_table_836.c */
