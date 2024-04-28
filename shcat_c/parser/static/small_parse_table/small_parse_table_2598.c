/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2598.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12990(t_small_parse_table_array *v)
{
	v->a[259800] = 2;
	v->a[259801] = anon_sym_LT_AMP_DASH;
	v->a[259802] = anon_sym_GT_AMP_DASH;
	v->a[259803] = state(4877);
	v->a[259804] = 2;
	v->a[259805] = sym_file_redirect;
	v->a[259806] = sym_herestring_redirect;
	v->a[259807] = actions(11485);
	v->a[259808] = 8;
	v->a[259809] = anon_sym_LT;
	v->a[259810] = anon_sym_GT;
	v->a[259811] = anon_sym_GT_GT;
	v->a[259812] = anon_sym_AMP_GT;
	v->a[259813] = anon_sym_AMP_GT_GT;
	v->a[259814] = anon_sym_LT_AMP;
	v->a[259815] = anon_sym_GT_AMP;
	v->a[259816] = anon_sym_GT_PIPE;
	v->a[259817] = actions(11533);
	v->a[259818] = 10;
	v->a[259819] = anon_sym_SEMI;
	small_parse_table_12991(v);
}

void	small_parse_table_12991(t_small_parse_table_array *v)
{
	v->a[259820] = anon_sym_PIPE_PIPE;
	v->a[259821] = anon_sym_AMP_AMP;
	v->a[259822] = anon_sym_PIPE;
	v->a[259823] = anon_sym_AMP;
	v->a[259824] = anon_sym_LT_LT;
	v->a[259825] = anon_sym_SEMI_SEMI;
	v->a[259826] = anon_sym_PIPE_AMP;
	v->a[259827] = anon_sym_LT_LT_DASH;
	v->a[259828] = anon_sym_BQUOTE;
	v->a[259829] = 16;
	v->a[259830] = actions(3);
	v->a[259831] = 1;
	v->a[259832] = sym_comment;
	v->a[259833] = actions(11760);
	v->a[259834] = 1;
	v->a[259835] = anon_sym_BANG2;
	v->a[259836] = actions(11764);
	v->a[259837] = 1;
	v->a[259838] = anon_sym_DOLLAR_LPAREN;
	v->a[259839] = actions(11766);
	small_parse_table_12992(v);
}

void	small_parse_table_12992(t_small_parse_table_array *v)
{
	v->a[259840] = 1;
	v->a[259841] = anon_sym_BQUOTE;
	v->a[259842] = actions(11768);
	v->a[259843] = 1;
	v->a[259844] = anon_sym_DOLLAR_BQUOTE;
	v->a[259845] = actions(11770);
	v->a[259846] = 1;
	v->a[259847] = aux_sym__simple_variable_name_token1;
	v->a[259848] = actions(11772);
	v->a[259849] = 1;
	v->a[259850] = sym_variable_name;
	v->a[259851] = actions(11943);
	v->a[259852] = 1;
	v->a[259853] = anon_sym_RBRACE3;
	v->a[259854] = state(3532);
	v->a[259855] = 1;
	v->a[259856] = sym_subscript;
	v->a[259857] = state(6428);
	v->a[259858] = 1;
	v->a[259859] = aux_sym__expansion_body_repeat1;
	small_parse_table_12993(v);
}

void	small_parse_table_12993(t_small_parse_table_array *v)
{
	v->a[259860] = state(6472);
	v->a[259861] = 1;
	v->a[259862] = sym_command_substitution;
	v->a[259863] = state(6891);
	v->a[259864] = 1;
	v->a[259865] = sym__expansion_body;
	v->a[259866] = actions(11762);
	v->a[259867] = 2;
	v->a[259868] = anon_sym_POUND2;
	v->a[259869] = anon_sym_EQ2;
	v->a[259870] = actions(8050);
	v->a[259871] = 3;
	v->a[259872] = sym__external_expansion_sym_hash;
	v->a[259873] = sym__external_expansion_sym_bang;
	v->a[259874] = sym__external_expansion_sym_equal;
	v->a[259875] = actions(11754);
	v->a[259876] = 4;
	v->a[259877] = anon_sym_DASH;
	v->a[259878] = anon_sym_STAR;
	v->a[259879] = anon_sym_QMARK;
	small_parse_table_12994(v);
}

void	small_parse_table_12994(t_small_parse_table_array *v)
{
	v->a[259880] = anon_sym_AT2;
	v->a[259881] = actions(11756);
	v->a[259882] = 5;
	v->a[259883] = anon_sym_BANG;
	v->a[259884] = anon_sym_DOLLAR;
	v->a[259885] = anon_sym_POUND;
	v->a[259886] = anon_sym_0;
	v->a[259887] = anon_sym__;
	v->a[259888] = 19;
	v->a[259889] = actions(71);
	v->a[259890] = 1;
	v->a[259891] = sym_comment;
	v->a[259892] = actions(11808);
	v->a[259893] = 1;
	v->a[259894] = anon_sym_LPAREN;
	v->a[259895] = actions(11810);
	v->a[259896] = 1;
	v->a[259897] = aux_sym__c_word_token1;
	v->a[259898] = actions(11812);
	v->a[259899] = 1;
	small_parse_table_12995(v);
}

/* EOF small_parse_table_2598.c */
