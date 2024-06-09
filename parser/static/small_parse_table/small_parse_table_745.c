/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_745.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3725(t_small_parse_table_array *v)
{
	v->a[74500] = actions(1249);
	v->a[74501] = 7;
	v->a[74502] = anon_sym_PIPE;
	v->a[74503] = anon_sym_LT;
	v->a[74504] = anon_sym_GT;
	v->a[74505] = anon_sym_AMP_GT;
	v->a[74506] = anon_sym_LT_AMP;
	v->a[74507] = anon_sym_GT_AMP;
	v->a[74508] = anon_sym_LT_LT;
	v->a[74509] = actions(1247);
	v->a[74510] = 12;
	v->a[74511] = sym_file_descriptor;
	v->a[74512] = sym__concat;
	v->a[74513] = sym_variable_name;
	v->a[74514] = anon_sym_AMP_AMP;
	v->a[74515] = anon_sym_PIPE_PIPE;
	v->a[74516] = anon_sym_GT_GT;
	v->a[74517] = anon_sym_AMP_GT_GT;
	v->a[74518] = anon_sym_GT_PIPE;
	v->a[74519] = anon_sym_LT_AMP_DASH;
	small_parse_table_3726(v);
}

void	small_parse_table_3726(t_small_parse_table_array *v)
{
	v->a[74520] = anon_sym_GT_AMP_DASH;
	v->a[74521] = anon_sym_LT_LT_DASH;
	v->a[74522] = aux_sym_concatenation_token1;
	v->a[74523] = 13;
	v->a[74524] = actions(3);
	v->a[74525] = 1;
	v->a[74526] = sym_comment;
	v->a[74527] = actions(2119);
	v->a[74528] = 1;
	v->a[74529] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74530] = actions(2121);
	v->a[74531] = 1;
	v->a[74532] = anon_sym_DOLLAR;
	v->a[74533] = actions(2123);
	v->a[74534] = 1;
	v->a[74535] = anon_sym_DQUOTE;
	v->a[74536] = actions(2125);
	v->a[74537] = 1;
	v->a[74538] = aux_sym_number_token1;
	v->a[74539] = actions(2127);
	small_parse_table_3727(v);
}

void	small_parse_table_3727(t_small_parse_table_array *v)
{
	v->a[74540] = 1;
	v->a[74541] = aux_sym_number_token2;
	v->a[74542] = actions(2129);
	v->a[74543] = 1;
	v->a[74544] = anon_sym_DOLLAR_LBRACE;
	v->a[74545] = actions(2131);
	v->a[74546] = 1;
	v->a[74547] = anon_sym_DOLLAR_LPAREN;
	v->a[74548] = actions(2133);
	v->a[74549] = 1;
	v->a[74550] = anon_sym_BQUOTE;
	v->a[74551] = actions(2135);
	v->a[74552] = 1;
	v->a[74553] = sym_extglob_pattern;
	v->a[74554] = actions(2897);
	v->a[74555] = 2;
	v->a[74556] = sym_raw_string;
	v->a[74557] = sym_word;
	v->a[74558] = state(2003);
	v->a[74559] = 2;
	small_parse_table_3728(v);
}

void	small_parse_table_3728(t_small_parse_table_array *v)
{
	v->a[74560] = sym_concatenation;
	v->a[74561] = sym__extglob_blob;
	v->a[74562] = state(1898);
	v->a[74563] = 6;
	v->a[74564] = sym_arithmetic_expansion;
	v->a[74565] = sym_string;
	v->a[74566] = sym_number;
	v->a[74567] = sym_simple_expansion;
	v->a[74568] = sym_expansion;
	v->a[74569] = sym_command_substitution;
	v->a[74570] = 3;
	v->a[74571] = actions(1404);
	v->a[74572] = 1;
	v->a[74573] = sym_comment;
	v->a[74574] = actions(1317);
	v->a[74575] = 7;
	v->a[74576] = anon_sym_PIPE;
	v->a[74577] = anon_sym_LT;
	v->a[74578] = anon_sym_GT;
	v->a[74579] = anon_sym_AMP_GT;
	small_parse_table_3729(v);
}

void	small_parse_table_3729(t_small_parse_table_array *v)
{
	v->a[74580] = anon_sym_LT_AMP;
	v->a[74581] = anon_sym_GT_AMP;
	v->a[74582] = anon_sym_LT_LT;
	v->a[74583] = actions(1319);
	v->a[74584] = 12;
	v->a[74585] = sym_file_descriptor;
	v->a[74586] = sym__concat;
	v->a[74587] = sym_variable_name;
	v->a[74588] = anon_sym_AMP_AMP;
	v->a[74589] = anon_sym_PIPE_PIPE;
	v->a[74590] = anon_sym_GT_GT;
	v->a[74591] = anon_sym_AMP_GT_GT;
	v->a[74592] = anon_sym_GT_PIPE;
	v->a[74593] = anon_sym_LT_AMP_DASH;
	v->a[74594] = anon_sym_GT_AMP_DASH;
	v->a[74595] = anon_sym_LT_LT_DASH;
	v->a[74596] = aux_sym_concatenation_token1;
	v->a[74597] = 13;
	v->a[74598] = actions(3);
	v->a[74599] = 1;
	small_parse_table_3730(v);
}

/* EOF small_parse_table_745.c */
