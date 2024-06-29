/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_840.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4200(t_small_parse_table_array *v)
{
	v->a[84000] = sym_comment;
	v->a[84001] = actions(718);
	v->a[84002] = 1;
	v->a[84003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84004] = actions(720);
	v->a[84005] = 1;
	v->a[84006] = anon_sym_DOLLAR;
	v->a[84007] = actions(722);
	v->a[84008] = 1;
	v->a[84009] = anon_sym_DQUOTE;
	v->a[84010] = actions(724);
	v->a[84011] = 1;
	v->a[84012] = anon_sym_DOLLAR_LBRACE;
	v->a[84013] = actions(726);
	v->a[84014] = 1;
	v->a[84015] = anon_sym_DOLLAR_LPAREN;
	v->a[84016] = actions(728);
	v->a[84017] = 1;
	v->a[84018] = anon_sym_BQUOTE;
	v->a[84019] = state(217);
	small_parse_table_4201(v);
}

void	small_parse_table_4201(t_small_parse_table_array *v)
{
	v->a[84020] = 2;
	v->a[84021] = sym_concatenation;
	v->a[84022] = aux_sym_for_statement_repeat1;
	v->a[84023] = actions(716);
	v->a[84024] = 3;
	v->a[84025] = sym_raw_string;
	v->a[84026] = sym_number;
	v->a[84027] = sym_word;
	v->a[84028] = state(600);
	v->a[84029] = 5;
	v->a[84030] = sym_arithmetic_expansion;
	v->a[84031] = sym_string;
	v->a[84032] = sym_simple_expansion;
	v->a[84033] = sym_expansion;
	v->a[84034] = sym_command_substitution;
	v->a[84035] = 10;
	v->a[84036] = actions(3);
	v->a[84037] = 1;
	v->a[84038] = sym_comment;
	v->a[84039] = actions(704);
	small_parse_table_4202(v);
}

void	small_parse_table_4202(t_small_parse_table_array *v)
{
	v->a[84040] = 1;
	v->a[84041] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84042] = actions(706);
	v->a[84043] = 1;
	v->a[84044] = anon_sym_DOLLAR;
	v->a[84045] = actions(708);
	v->a[84046] = 1;
	v->a[84047] = anon_sym_DQUOTE;
	v->a[84048] = actions(710);
	v->a[84049] = 1;
	v->a[84050] = anon_sym_DOLLAR_LBRACE;
	v->a[84051] = actions(712);
	v->a[84052] = 1;
	v->a[84053] = anon_sym_DOLLAR_LPAREN;
	v->a[84054] = actions(714);
	v->a[84055] = 1;
	v->a[84056] = anon_sym_BQUOTE;
	v->a[84057] = state(214);
	v->a[84058] = 2;
	v->a[84059] = sym_concatenation;
	small_parse_table_4203(v);
}

void	small_parse_table_4203(t_small_parse_table_array *v)
{
	v->a[84060] = aux_sym_for_statement_repeat1;
	v->a[84061] = actions(702);
	v->a[84062] = 3;
	v->a[84063] = sym_raw_string;
	v->a[84064] = sym_number;
	v->a[84065] = sym_word;
	v->a[84066] = state(447);
	v->a[84067] = 5;
	v->a[84068] = sym_arithmetic_expansion;
	v->a[84069] = sym_string;
	v->a[84070] = sym_simple_expansion;
	v->a[84071] = sym_expansion;
	v->a[84072] = sym_command_substitution;
	v->a[84073] = 3;
	v->a[84074] = actions(1074);
	v->a[84075] = 1;
	v->a[84076] = sym_comment;
	v->a[84077] = actions(2340);
	v->a[84078] = 7;
	v->a[84079] = anon_sym_PIPE;
	small_parse_table_4204(v);
}

void	small_parse_table_4204(t_small_parse_table_array *v)
{
	v->a[84080] = anon_sym_LT;
	v->a[84081] = anon_sym_GT;
	v->a[84082] = anon_sym_AMP_GT;
	v->a[84083] = anon_sym_LT_AMP;
	v->a[84084] = anon_sym_GT_AMP;
	v->a[84085] = anon_sym_LT_LT;
	v->a[84086] = actions(2338);
	v->a[84087] = 9;
	v->a[84088] = sym_file_descriptor;
	v->a[84089] = anon_sym_AMP_AMP;
	v->a[84090] = anon_sym_PIPE_PIPE;
	v->a[84091] = anon_sym_GT_GT;
	v->a[84092] = anon_sym_AMP_GT_GT;
	v->a[84093] = anon_sym_GT_PIPE;
	v->a[84094] = anon_sym_LT_AMP_DASH;
	v->a[84095] = anon_sym_GT_AMP_DASH;
	v->a[84096] = anon_sym_LT_LT_DASH;
	v->a[84097] = 3;
	v->a[84098] = actions(3);
	v->a[84099] = 1;
	small_parse_table_4205(v);
}

/* EOF small_parse_table_840.c */
