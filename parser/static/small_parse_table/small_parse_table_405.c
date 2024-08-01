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
	v->a[40500] = 1;
	v->a[40501] = sym_comment;
	v->a[40502] = actions(655);
	v->a[40503] = 1;
	v->a[40504] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40505] = actions(657);
	v->a[40506] = 1;
	v->a[40507] = anon_sym_DOLLAR;
	v->a[40508] = actions(659);
	v->a[40509] = 1;
	v->a[40510] = anon_sym_DQUOTE;
	v->a[40511] = actions(661);
	v->a[40512] = 1;
	v->a[40513] = anon_sym_DOLLAR_LBRACE;
	v->a[40514] = actions(663);
	v->a[40515] = 1;
	v->a[40516] = anon_sym_DOLLAR_LPAREN;
	v->a[40517] = actions(665);
	v->a[40518] = 1;
	v->a[40519] = anon_sym_BQUOTE;
	small_parse_table_2026(v);
}

void	small_parse_table_2026(t_small_parse_table_array *v)
{
	v->a[40520] = state(509);
	v->a[40521] = 2;
	v->a[40522] = sym_concatenation;
	v->a[40523] = aux_sym_for_statement_repeat1;
	v->a[40524] = actions(1245);
	v->a[40525] = 3;
	v->a[40526] = sym_raw_string;
	v->a[40527] = sym_number;
	v->a[40528] = sym_word;
	v->a[40529] = state(684);
	v->a[40530] = 5;
	v->a[40531] = sym_arithmetic_expansion;
	v->a[40532] = sym_string;
	v->a[40533] = sym_simple_expansion;
	v->a[40534] = sym_expansion;
	v->a[40535] = sym_command_substitution;
	v->a[40536] = 10;
	v->a[40537] = actions(3);
	v->a[40538] = 1;
	v->a[40539] = sym_comment;
	small_parse_table_2027(v);
}

void	small_parse_table_2027(t_small_parse_table_array *v)
{
	v->a[40540] = actions(704);
	v->a[40541] = 1;
	v->a[40542] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40543] = actions(706);
	v->a[40544] = 1;
	v->a[40545] = anon_sym_DOLLAR;
	v->a[40546] = actions(708);
	v->a[40547] = 1;
	v->a[40548] = anon_sym_DQUOTE;
	v->a[40549] = actions(710);
	v->a[40550] = 1;
	v->a[40551] = anon_sym_DOLLAR_LBRACE;
	v->a[40552] = actions(712);
	v->a[40553] = 1;
	v->a[40554] = anon_sym_DOLLAR_LPAREN;
	v->a[40555] = actions(714);
	v->a[40556] = 1;
	v->a[40557] = anon_sym_BQUOTE;
	v->a[40558] = state(207);
	v->a[40559] = 2;
	small_parse_table_2028(v);
}

void	small_parse_table_2028(t_small_parse_table_array *v)
{
	v->a[40560] = sym_concatenation;
	v->a[40561] = aux_sym_for_statement_repeat1;
	v->a[40562] = actions(760);
	v->a[40563] = 3;
	v->a[40564] = sym_raw_string;
	v->a[40565] = sym_number;
	v->a[40566] = sym_word;
	v->a[40567] = state(493);
	v->a[40568] = 5;
	v->a[40569] = sym_arithmetic_expansion;
	v->a[40570] = sym_string;
	v->a[40571] = sym_simple_expansion;
	v->a[40572] = sym_expansion;
	v->a[40573] = sym_command_substitution;
	v->a[40574] = 3;
	v->a[40575] = actions(3);
	v->a[40576] = 1;
	v->a[40577] = sym_comment;
	v->a[40578] = actions(1087);
	v->a[40579] = 4;
	small_parse_table_2029(v);
}

void	small_parse_table_2029(t_small_parse_table_array *v)
{
	v->a[40580] = sym__concat;
	v->a[40581] = sym_variable_name;
	v->a[40582] = ts_builtin_sym_end;
	v->a[40583] = aux_sym_heredoc_redirect_token1;
	v->a[40584] = actions(1089);
	v->a[40585] = 12;
	v->a[40586] = anon_sym_PIPE;
	v->a[40587] = anon_sym_RPAREN;
	v->a[40588] = anon_sym_SEMI_SEMI;
	v->a[40589] = anon_sym_AMP_AMP;
	v->a[40590] = anon_sym_PIPE_PIPE;
	v->a[40591] = anon_sym_LT;
	v->a[40592] = anon_sym_GT;
	v->a[40593] = anon_sym_GT_GT;
	v->a[40594] = anon_sym_LT_LT;
	v->a[40595] = aux_sym_concatenation_token1;
	v->a[40596] = anon_sym_BQUOTE;
	v->a[40597] = anon_sym_SEMI;
	v->a[40598] = 10;
	v->a[40599] = actions(3);
	small_parse_table_2030(v);
}

/* EOF small_parse_table_405.c */
