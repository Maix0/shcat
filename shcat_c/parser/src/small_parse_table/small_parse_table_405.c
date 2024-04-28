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
	v->a[40500] = actions(3);
	v->a[40501] = 1;
	v->a[40502] = sym_comment;
	v->a[40503] = actions(1302);
	v->a[40504] = 6;
	v->a[40505] = sym_file_descriptor;
	v->a[40506] = sym__concat;
	v->a[40507] = sym_test_operator;
	v->a[40508] = sym__bare_dollar;
	v->a[40509] = sym__brace_start;
	v->a[40510] = aux_sym_heredoc_redirect_token1;
	v->a[40511] = actions(1300);
	v->a[40512] = 42;
	v->a[40513] = anon_sym_LPAREN_LPAREN;
	v->a[40514] = anon_sym_SEMI;
	v->a[40515] = anon_sym_PIPE_PIPE;
	v->a[40516] = anon_sym_AMP_AMP;
	v->a[40517] = anon_sym_PIPE;
	v->a[40518] = anon_sym_AMP;
	v->a[40519] = anon_sym_EQ_EQ;
	small_parse_table_2026(v);
}

void	small_parse_table_2026(t_small_parse_table_array *v)
{
	v->a[40520] = anon_sym_LT;
	v->a[40521] = anon_sym_GT;
	v->a[40522] = anon_sym_LT_LT;
	v->a[40523] = anon_sym_GT_GT;
	v->a[40524] = anon_sym_LPAREN;
	v->a[40525] = anon_sym_RPAREN;
	v->a[40526] = anon_sym_SEMI_SEMI;
	v->a[40527] = anon_sym_PIPE_AMP;
	v->a[40528] = anon_sym_EQ_TILDE;
	v->a[40529] = anon_sym_AMP_GT;
	v->a[40530] = anon_sym_AMP_GT_GT;
	v->a[40531] = anon_sym_LT_AMP;
	v->a[40532] = anon_sym_GT_AMP;
	v->a[40533] = anon_sym_GT_PIPE;
	v->a[40534] = anon_sym_LT_AMP_DASH;
	v->a[40535] = anon_sym_GT_AMP_DASH;
	v->a[40536] = anon_sym_LT_LT_DASH;
	v->a[40537] = anon_sym_LT_LT_LT;
	v->a[40538] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40539] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_2027(v);
}

void	small_parse_table_2027(t_small_parse_table_array *v)
{
	v->a[40540] = aux_sym_concatenation_token1;
	v->a[40541] = anon_sym_DOLLAR;
	v->a[40542] = sym__special_character;
	v->a[40543] = anon_sym_DQUOTE;
	v->a[40544] = sym_raw_string;
	v->a[40545] = sym_ansi_c_string;
	v->a[40546] = aux_sym_number_token1;
	v->a[40547] = aux_sym_number_token2;
	v->a[40548] = anon_sym_DOLLAR_LBRACE;
	v->a[40549] = anon_sym_DOLLAR_LPAREN;
	v->a[40550] = anon_sym_BQUOTE;
	v->a[40551] = anon_sym_DOLLAR_BQUOTE;
	v->a[40552] = anon_sym_LT_LPAREN;
	v->a[40553] = anon_sym_GT_LPAREN;
	v->a[40554] = sym_word;
	v->a[40555] = 5;
	v->a[40556] = actions(3);
	v->a[40557] = 1;
	v->a[40558] = sym_comment;
	v->a[40559] = actions(5078);
	small_parse_table_2028(v);
}

void	small_parse_table_2028(t_small_parse_table_array *v)
{
	v->a[40560] = 1;
	v->a[40561] = sym__special_character;
	v->a[40562] = state(1095);
	v->a[40563] = 1;
	v->a[40564] = aux_sym__literal_repeat1;
	v->a[40565] = actions(4482);
	v->a[40566] = 5;
	v->a[40567] = sym_file_descriptor;
	v->a[40568] = sym_test_operator;
	v->a[40569] = sym__bare_dollar;
	v->a[40570] = sym__brace_start;
	v->a[40571] = aux_sym_heredoc_redirect_token1;
	v->a[40572] = actions(4480);
	v->a[40573] = 41;
	v->a[40574] = anon_sym_LPAREN_LPAREN;
	v->a[40575] = anon_sym_SEMI;
	v->a[40576] = anon_sym_PIPE_PIPE;
	v->a[40577] = anon_sym_AMP_AMP;
	v->a[40578] = anon_sym_PIPE;
	v->a[40579] = anon_sym_AMP;
	small_parse_table_2029(v);
}

void	small_parse_table_2029(t_small_parse_table_array *v)
{
	v->a[40580] = anon_sym_EQ_EQ;
	v->a[40581] = anon_sym_LT;
	v->a[40582] = anon_sym_GT;
	v->a[40583] = anon_sym_LT_LT;
	v->a[40584] = anon_sym_GT_GT;
	v->a[40585] = anon_sym_esac;
	v->a[40586] = anon_sym_SEMI_SEMI;
	v->a[40587] = anon_sym_SEMI_AMP;
	v->a[40588] = anon_sym_SEMI_SEMI_AMP;
	v->a[40589] = anon_sym_PIPE_AMP;
	v->a[40590] = anon_sym_EQ_TILDE;
	v->a[40591] = anon_sym_AMP_GT;
	v->a[40592] = anon_sym_AMP_GT_GT;
	v->a[40593] = anon_sym_LT_AMP;
	v->a[40594] = anon_sym_GT_AMP;
	v->a[40595] = anon_sym_GT_PIPE;
	v->a[40596] = anon_sym_LT_AMP_DASH;
	v->a[40597] = anon_sym_GT_AMP_DASH;
	v->a[40598] = anon_sym_LT_LT_DASH;
	v->a[40599] = anon_sym_LT_LT_LT;
	small_parse_table_2030(v);
}

/* EOF small_parse_table_405.c */
