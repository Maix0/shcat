/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_405.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2025(t_small_parse_table_array *v)
{
	v->a[40500] = sym_number;
	v->a[40501] = anon_sym_DOLLAR_LBRACE;
	v->a[40502] = anon_sym_DOLLAR_LPAREN;
	v->a[40503] = anon_sym_BQUOTE;
	v->a[40504] = sym_word;
	v->a[40505] = anon_sym_SEMI;
	v->a[40506] = 16;
	v->a[40507] = actions(3);
	v->a[40508] = 1;
	v->a[40509] = sym_comment;
	v->a[40510] = actions(25);
	v->a[40511] = 1;
	v->a[40512] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40513] = actions(27);
	v->a[40514] = 1;
	v->a[40515] = anon_sym_DOLLAR;
	v->a[40516] = actions(29);
	v->a[40517] = 1;
	v->a[40518] = anon_sym_DQUOTE;
	v->a[40519] = actions(33);
	small_parse_table_2026(v);
}

void	small_parse_table_2026(t_small_parse_table_array *v)
{
	v->a[40520] = 1;
	v->a[40521] = anon_sym_DOLLAR_LBRACE;
	v->a[40522] = actions(35);
	v->a[40523] = 1;
	v->a[40524] = anon_sym_DOLLAR_LPAREN;
	v->a[40525] = actions(37);
	v->a[40526] = 1;
	v->a[40527] = anon_sym_BQUOTE;
	v->a[40528] = actions(359);
	v->a[40529] = 1;
	v->a[40530] = sym_variable_name;
	v->a[40531] = actions(1095);
	v->a[40532] = 1;
	v->a[40533] = sym_file_descriptor;
	v->a[40534] = state(167);
	v->a[40535] = 1;
	v->a[40536] = sym_command_name;
	v->a[40537] = state(627);
	v->a[40538] = 1;
	v->a[40539] = sym_concatenation;
	small_parse_table_2027(v);
}

void	small_parse_table_2027(t_small_parse_table_array *v)
{
	v->a[40540] = state(1203);
	v->a[40541] = 1;
	v->a[40542] = sym_file_redirect;
	v->a[40543] = state(968);
	v->a[40544] = 2;
	v->a[40545] = sym_variable_assignment;
	v->a[40546] = aux_sym_command_repeat1;
	v->a[40547] = actions(31);
	v->a[40548] = 3;
	v->a[40549] = sym_raw_string;
	v->a[40550] = sym_number;
	v->a[40551] = sym_word;
	v->a[40552] = state(373);
	v->a[40553] = 5;
	v->a[40554] = sym_arithmetic_expansion;
	v->a[40555] = sym_string;
	v->a[40556] = sym_simple_expansion;
	v->a[40557] = sym_expansion;
	v->a[40558] = sym_command_substitution;
	v->a[40559] = actions(1093);
	small_parse_table_2028(v);
}

void	small_parse_table_2028(t_small_parse_table_array *v)
{
	v->a[40560] = 7;
	v->a[40561] = anon_sym_LT;
	v->a[40562] = anon_sym_GT;
	v->a[40563] = anon_sym_GT_GT;
	v->a[40564] = anon_sym_LT_AMP;
	v->a[40565] = anon_sym_GT_AMP;
	v->a[40566] = anon_sym_GT_PIPE;
	v->a[40567] = anon_sym_LT_GT;
	v->a[40568] = 3;
	v->a[40569] = actions(3);
	v->a[40570] = 1;
	v->a[40571] = sym_comment;
	v->a[40572] = actions(1229);
	v->a[40573] = 3;
	v->a[40574] = sym_file_descriptor;
	v->a[40575] = sym__concat;
	v->a[40576] = ts_builtin_sym_end;
	v->a[40577] = actions(1227);
	v->a[40578] = 25;
	v->a[40579] = anon_sym_PIPE;
	small_parse_table_2029(v);
}

void	small_parse_table_2029(t_small_parse_table_array *v)
{
	v->a[40580] = anon_sym_SEMI_SEMI;
	v->a[40581] = anon_sym_AMP_AMP;
	v->a[40582] = anon_sym_PIPE_PIPE;
	v->a[40583] = anon_sym_LT;
	v->a[40584] = anon_sym_GT;
	v->a[40585] = anon_sym_GT_GT;
	v->a[40586] = anon_sym_LT_AMP;
	v->a[40587] = anon_sym_GT_AMP;
	v->a[40588] = anon_sym_GT_PIPE;
	v->a[40589] = anon_sym_LT_GT;
	v->a[40590] = anon_sym_LT_LT;
	v->a[40591] = anon_sym_LT_LT_DASH;
	v->a[40592] = aux_sym_heredoc_redirect_token1;
	v->a[40593] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40594] = aux_sym_concatenation_token1;
	v->a[40595] = anon_sym_DOLLAR;
	v->a[40596] = anon_sym_DQUOTE;
	v->a[40597] = sym_raw_string;
	v->a[40598] = sym_number;
	v->a[40599] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2030(v);
}

/* EOF small_parse_table_405.c */
