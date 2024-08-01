/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_533.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2665(t_small_parse_table_array *v)
{
	v->a[53300] = 10;
	v->a[53301] = anon_sym_esac;
	v->a[53302] = anon_sym_PIPE;
	v->a[53303] = anon_sym_SEMI_SEMI;
	v->a[53304] = anon_sym_AMP_AMP;
	v->a[53305] = anon_sym_PIPE_PIPE;
	v->a[53306] = anon_sym_LT;
	v->a[53307] = anon_sym_GT;
	v->a[53308] = anon_sym_GT_GT;
	v->a[53309] = anon_sym_LT_LT;
	v->a[53310] = anon_sym_SEMI;
	v->a[53311] = 4;
	v->a[53312] = actions(3);
	v->a[53313] = 1;
	v->a[53314] = sym_comment;
	v->a[53315] = actions(357);
	v->a[53316] = 1;
	v->a[53317] = sym_variable_name;
	v->a[53318] = actions(355);
	v->a[53319] = 2;
	small_parse_table_2666(v);
}

void	small_parse_table_2666(t_small_parse_table_array *v)
{
	v->a[53320] = aux_sym__simple_variable_name_token1;
	v->a[53321] = aux_sym__multiline_variable_name_token1;
	v->a[53322] = actions(353);
	v->a[53323] = 8;
	v->a[53324] = anon_sym_BANG;
	v->a[53325] = anon_sym_DASH;
	v->a[53326] = anon_sym_STAR;
	v->a[53327] = anon_sym_QMARK;
	v->a[53328] = anon_sym_DOLLAR;
	v->a[53329] = anon_sym_POUND;
	v->a[53330] = anon_sym_AT;
	v->a[53331] = anon_sym_0;
	v->a[53332] = 5;
	v->a[53333] = actions(1436);
	v->a[53334] = 1;
	v->a[53335] = sym_comment;
	v->a[53336] = state(1224);
	v->a[53337] = 1;
	v->a[53338] = aux_sym_concatenation_repeat1;
	v->a[53339] = actions(2642);
	small_parse_table_2667(v);
}

void	small_parse_table_2667(t_small_parse_table_array *v)
{
	v->a[53340] = 2;
	v->a[53341] = sym__concat;
	v->a[53342] = aux_sym_concatenation_token1;
	v->a[53343] = actions(919);
	v->a[53344] = 3;
	v->a[53345] = anon_sym_PIPE;
	v->a[53346] = anon_sym_LT;
	v->a[53347] = anon_sym_GT;
	v->a[53348] = actions(917);
	v->a[53349] = 5;
	v->a[53350] = sym_variable_name;
	v->a[53351] = anon_sym_AMP_AMP;
	v->a[53352] = anon_sym_PIPE_PIPE;
	v->a[53353] = anon_sym_GT_GT;
	v->a[53354] = anon_sym_LT_LT;
	v->a[53355] = 5;
	v->a[53356] = actions(3);
	v->a[53357] = 1;
	v->a[53358] = sym_comment;
	v->a[53359] = actions(1952);
	small_parse_table_2668(v);
}

void	small_parse_table_2668(t_small_parse_table_array *v)
{
	v->a[53360] = 1;
	v->a[53361] = aux_sym_heredoc_redirect_token1;
	v->a[53362] = actions(2668);
	v->a[53363] = 1;
	v->a[53364] = sym_variable_name;
	v->a[53365] = state(1236);
	v->a[53366] = 2;
	v->a[53367] = sym_variable_assignment;
	v->a[53368] = aux_sym__variable_assignments_repeat1;
	v->a[53369] = actions(1954);
	v->a[53370] = 7;
	v->a[53371] = anon_sym_PIPE;
	v->a[53372] = anon_sym_AMP_AMP;
	v->a[53373] = anon_sym_PIPE_PIPE;
	v->a[53374] = anon_sym_LT;
	v->a[53375] = anon_sym_GT;
	v->a[53376] = anon_sym_GT_GT;
	v->a[53377] = anon_sym_LT_LT;
	v->a[53378] = 6;
	v->a[53379] = actions(3);
	small_parse_table_2669(v);
}

void	small_parse_table_2669(t_small_parse_table_array *v)
{
	v->a[53380] = 1;
	v->a[53381] = sym_comment;
	v->a[53382] = actions(597);
	v->a[53383] = 1;
	v->a[53384] = anon_sym_LT_LT;
	v->a[53385] = actions(2635);
	v->a[53386] = 1;
	v->a[53387] = aux_sym_heredoc_redirect_token1;
	v->a[53388] = actions(1033);
	v->a[53389] = 2;
	v->a[53390] = anon_sym_AMP_AMP;
	v->a[53391] = anon_sym_PIPE_PIPE;
	v->a[53392] = actions(2633);
	v->a[53393] = 3;
	v->a[53394] = anon_sym_LT;
	v->a[53395] = anon_sym_GT;
	v->a[53396] = anon_sym_GT_GT;
	v->a[53397] = state(1225);
	v->a[53398] = 3;
	v->a[53399] = sym_file_redirect;
	small_parse_table_2670(v);
}

/* EOF small_parse_table_533.c */
