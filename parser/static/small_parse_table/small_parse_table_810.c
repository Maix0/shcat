/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_810.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4050(t_small_parse_table_array *v)
{
	v->a[81000] = sym_comment;
	v->a[81001] = actions(2881);
	v->a[81002] = 1;
	v->a[81003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81004] = actions(2885);
	v->a[81005] = 1;
	v->a[81006] = anon_sym_DQUOTE;
	v->a[81007] = actions(2887);
	v->a[81008] = 1;
	v->a[81009] = anon_sym_DOLLAR_LBRACE;
	v->a[81010] = actions(2889);
	v->a[81011] = 1;
	v->a[81012] = anon_sym_DOLLAR_LPAREN;
	v->a[81013] = actions(2891);
	v->a[81014] = 1;
	v->a[81015] = anon_sym_BQUOTE;
	v->a[81016] = actions(3030);
	v->a[81017] = 1;
	v->a[81018] = anon_sym_DOLLAR;
	v->a[81019] = actions(3032);
	small_parse_table_4051(v);
}

void	small_parse_table_4051(t_small_parse_table_array *v)
{
	v->a[81020] = 1;
	v->a[81021] = sym__bare_dollar;
	v->a[81022] = actions(3028);
	v->a[81023] = 5;
	v->a[81024] = aux_sym_concatenation_token1;
	v->a[81025] = sym_raw_string;
	v->a[81026] = sym_number;
	v->a[81027] = sym__comment_word;
	v->a[81028] = sym_word;
	v->a[81029] = state(872);
	v->a[81030] = 5;
	v->a[81031] = sym_arithmetic_expansion;
	v->a[81032] = sym_string;
	v->a[81033] = sym_simple_expansion;
	v->a[81034] = sym_expansion;
	v->a[81035] = sym_command_substitution;
	v->a[81036] = 10;
	v->a[81037] = actions(3);
	v->a[81038] = 1;
	v->a[81039] = sym_comment;
	small_parse_table_4052(v);
}

void	small_parse_table_4052(t_small_parse_table_array *v)
{
	v->a[81040] = actions(904);
	v->a[81041] = 1;
	v->a[81042] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81043] = actions(908);
	v->a[81044] = 1;
	v->a[81045] = anon_sym_DQUOTE;
	v->a[81046] = actions(910);
	v->a[81047] = 1;
	v->a[81048] = anon_sym_DOLLAR_LBRACE;
	v->a[81049] = actions(912);
	v->a[81050] = 1;
	v->a[81051] = anon_sym_DOLLAR_LPAREN;
	v->a[81052] = actions(914);
	v->a[81053] = 1;
	v->a[81054] = anon_sym_BQUOTE;
	v->a[81055] = actions(2827);
	v->a[81056] = 1;
	v->a[81057] = sym__bare_dollar;
	v->a[81058] = actions(3034);
	v->a[81059] = 1;
	small_parse_table_4053(v);
}

void	small_parse_table_4053(t_small_parse_table_array *v)
{
	v->a[81060] = anon_sym_DOLLAR;
	v->a[81061] = actions(2823);
	v->a[81062] = 5;
	v->a[81063] = aux_sym_concatenation_token1;
	v->a[81064] = sym_raw_string;
	v->a[81065] = sym_number;
	v->a[81066] = sym__comment_word;
	v->a[81067] = sym_word;
	v->a[81068] = state(1040);
	v->a[81069] = 5;
	v->a[81070] = sym_arithmetic_expansion;
	v->a[81071] = sym_string;
	v->a[81072] = sym_simple_expansion;
	v->a[81073] = sym_expansion;
	v->a[81074] = sym_command_substitution;
	v->a[81075] = 10;
	v->a[81076] = actions(3);
	v->a[81077] = 1;
	v->a[81078] = sym_comment;
	v->a[81079] = actions(859);
	small_parse_table_4054(v);
}

void	small_parse_table_4054(t_small_parse_table_array *v)
{
	v->a[81080] = 1;
	v->a[81081] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81082] = actions(863);
	v->a[81083] = 1;
	v->a[81084] = anon_sym_DQUOTE;
	v->a[81085] = actions(865);
	v->a[81086] = 1;
	v->a[81087] = anon_sym_DOLLAR_LBRACE;
	v->a[81088] = actions(867);
	v->a[81089] = 1;
	v->a[81090] = anon_sym_DOLLAR_LPAREN;
	v->a[81091] = actions(869);
	v->a[81092] = 1;
	v->a[81093] = anon_sym_BQUOTE;
	v->a[81094] = actions(2971);
	v->a[81095] = 1;
	v->a[81096] = sym__bare_dollar;
	v->a[81097] = actions(3036);
	v->a[81098] = 1;
	v->a[81099] = anon_sym_DOLLAR;
	small_parse_table_4055(v);
}

/* EOF small_parse_table_810.c */
