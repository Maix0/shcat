/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2596.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12980(t_small_parse_table_array *v)
{
	v->a[259600] = actions(11760);
	v->a[259601] = 1;
	v->a[259602] = anon_sym_BANG2;
	v->a[259603] = actions(11764);
	v->a[259604] = 1;
	v->a[259605] = anon_sym_DOLLAR_LPAREN;
	v->a[259606] = actions(11766);
	v->a[259607] = 1;
	v->a[259608] = anon_sym_BQUOTE;
	v->a[259609] = actions(11768);
	v->a[259610] = 1;
	v->a[259611] = anon_sym_DOLLAR_BQUOTE;
	v->a[259612] = actions(11770);
	v->a[259613] = 1;
	v->a[259614] = aux_sym__simple_variable_name_token1;
	v->a[259615] = actions(11772);
	v->a[259616] = 1;
	v->a[259617] = sym_variable_name;
	v->a[259618] = actions(11937);
	v->a[259619] = 1;
	small_parse_table_12981(v);
}

void	small_parse_table_12981(t_small_parse_table_array *v)
{
	v->a[259620] = anon_sym_RBRACE3;
	v->a[259621] = state(3532);
	v->a[259622] = 1;
	v->a[259623] = sym_subscript;
	v->a[259624] = state(6428);
	v->a[259625] = 1;
	v->a[259626] = aux_sym__expansion_body_repeat1;
	v->a[259627] = state(6472);
	v->a[259628] = 1;
	v->a[259629] = sym_command_substitution;
	v->a[259630] = state(7332);
	v->a[259631] = 1;
	v->a[259632] = sym__expansion_body;
	v->a[259633] = actions(11762);
	v->a[259634] = 2;
	v->a[259635] = anon_sym_POUND2;
	v->a[259636] = anon_sym_EQ2;
	v->a[259637] = actions(8050);
	v->a[259638] = 3;
	v->a[259639] = sym__external_expansion_sym_hash;
	small_parse_table_12982(v);
}

void	small_parse_table_12982(t_small_parse_table_array *v)
{
	v->a[259640] = sym__external_expansion_sym_bang;
	v->a[259641] = sym__external_expansion_sym_equal;
	v->a[259642] = actions(11754);
	v->a[259643] = 4;
	v->a[259644] = anon_sym_DASH;
	v->a[259645] = anon_sym_STAR;
	v->a[259646] = anon_sym_QMARK;
	v->a[259647] = anon_sym_AT2;
	v->a[259648] = actions(11756);
	v->a[259649] = 5;
	v->a[259650] = anon_sym_BANG;
	v->a[259651] = anon_sym_DOLLAR;
	v->a[259652] = anon_sym_POUND;
	v->a[259653] = anon_sym_0;
	v->a[259654] = anon_sym__;
	v->a[259655] = 4;
	v->a[259656] = actions(3);
	v->a[259657] = 1;
	v->a[259658] = sym_comment;
	v->a[259659] = actions(4272);
	small_parse_table_12983(v);
}

void	small_parse_table_12983(t_small_parse_table_array *v)
{
	v->a[259660] = 2;
	v->a[259661] = sym_file_descriptor;
	v->a[259662] = aux_sym_heredoc_redirect_token1;
	v->a[259663] = state(4746);
	v->a[259664] = 3;
	v->a[259665] = sym_file_redirect;
	v->a[259666] = sym_heredoc_redirect;
	v->a[259667] = aux_sym_redirected_statement_repeat1;
	v->a[259668] = actions(4270);
	v->a[259669] = 20;
	v->a[259670] = anon_sym_SEMI;
	v->a[259671] = anon_sym_PIPE_PIPE;
	v->a[259672] = anon_sym_AMP_AMP;
	v->a[259673] = anon_sym_PIPE;
	v->a[259674] = anon_sym_AMP;
	v->a[259675] = anon_sym_LT;
	v->a[259676] = anon_sym_GT;
	v->a[259677] = anon_sym_LT_LT;
	v->a[259678] = anon_sym_GT_GT;
	v->a[259679] = anon_sym_RPAREN;
	small_parse_table_12984(v);
}

void	small_parse_table_12984(t_small_parse_table_array *v)
{
	v->a[259680] = anon_sym_SEMI_SEMI;
	v->a[259681] = anon_sym_PIPE_AMP;
	v->a[259682] = anon_sym_AMP_GT;
	v->a[259683] = anon_sym_AMP_GT_GT;
	v->a[259684] = anon_sym_LT_AMP;
	v->a[259685] = anon_sym_GT_AMP;
	v->a[259686] = anon_sym_GT_PIPE;
	v->a[259687] = anon_sym_LT_AMP_DASH;
	v->a[259688] = anon_sym_GT_AMP_DASH;
	v->a[259689] = anon_sym_LT_LT_DASH;
	v->a[259690] = 5;
	v->a[259691] = actions(3);
	v->a[259692] = 1;
	v->a[259693] = sym_comment;
	v->a[259694] = actions(4253);
	v->a[259695] = 2;
	v->a[259696] = anon_sym_PIPE;
	v->a[259697] = anon_sym_PIPE_AMP;
	v->a[259698] = actions(4272);
	v->a[259699] = 2;
	small_parse_table_12985(v);
}

/* EOF small_parse_table_2596.c */
