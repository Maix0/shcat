/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_325.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1625(t_small_parse_table_array *v)
{
	v->a[32500] = 14;
	v->a[32501] = actions(3);
	v->a[32502] = 1;
	v->a[32503] = sym_comment;
	v->a[32504] = actions(497);
	v->a[32505] = 1;
	v->a[32506] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32507] = actions(499);
	v->a[32508] = 1;
	v->a[32509] = anon_sym_DOLLAR;
	v->a[32510] = actions(501);
	v->a[32511] = 1;
	v->a[32512] = anon_sym_DQUOTE;
	v->a[32513] = actions(503);
	v->a[32514] = 1;
	v->a[32515] = anon_sym_DOLLAR_LBRACE;
	v->a[32516] = actions(505);
	v->a[32517] = 1;
	v->a[32518] = anon_sym_DOLLAR_LPAREN;
	v->a[32519] = actions(507);
	small_parse_table_1626(v);
}

void	small_parse_table_1626(t_small_parse_table_array *v)
{
	v->a[32520] = 1;
	v->a[32521] = anon_sym_BQUOTE;
	v->a[32522] = actions(509);
	v->a[32523] = 1;
	v->a[32524] = sym__bare_dollar;
	v->a[32525] = actions(547);
	v->a[32526] = 1;
	v->a[32527] = sym_file_descriptor;
	v->a[32528] = state(392);
	v->a[32529] = 1;
	v->a[32530] = aux_sym_command_repeat2;
	v->a[32531] = state(729);
	v->a[32532] = 1;
	v->a[32533] = sym_concatenation;
	v->a[32534] = actions(838);
	v->a[32535] = 3;
	v->a[32536] = sym_raw_string;
	v->a[32537] = sym_number;
	v->a[32538] = sym_word;
	v->a[32539] = state(910);
	small_parse_table_1627(v);
}

void	small_parse_table_1627(t_small_parse_table_array *v)
{
	v->a[32540] = 5;
	v->a[32541] = sym_arithmetic_expansion;
	v->a[32542] = sym_string;
	v->a[32543] = sym_simple_expansion;
	v->a[32544] = sym_expansion;
	v->a[32545] = sym_command_substitution;
	v->a[32546] = actions(545);
	v->a[32547] = 16;
	v->a[32548] = anon_sym_PIPE;
	v->a[32549] = anon_sym_AMP_AMP;
	v->a[32550] = anon_sym_PIPE_PIPE;
	v->a[32551] = anon_sym_LT;
	v->a[32552] = anon_sym_GT;
	v->a[32553] = anon_sym_GT_GT;
	v->a[32554] = anon_sym_AMP_GT;
	v->a[32555] = anon_sym_AMP_GT_GT;
	v->a[32556] = anon_sym_LT_AMP;
	v->a[32557] = anon_sym_GT_AMP;
	v->a[32558] = anon_sym_GT_PIPE;
	v->a[32559] = anon_sym_LT_AMP_DASH;
	small_parse_table_1628(v);
}

void	small_parse_table_1628(t_small_parse_table_array *v)
{
	v->a[32560] = anon_sym_GT_AMP_DASH;
	v->a[32561] = anon_sym_LT_LT;
	v->a[32562] = anon_sym_LT_LT_DASH;
	v->a[32563] = aux_sym_heredoc_redirect_token1;
	v->a[32564] = 21;
	v->a[32565] = actions(3);
	v->a[32566] = 1;
	v->a[32567] = sym_comment;
	v->a[32568] = actions(17);
	v->a[32569] = 1;
	v->a[32570] = anon_sym_LPAREN;
	v->a[32571] = actions(59);
	v->a[32572] = 1;
	v->a[32573] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32574] = actions(61);
	v->a[32575] = 1;
	v->a[32576] = anon_sym_DOLLAR;
	v->a[32577] = actions(63);
	v->a[32578] = 1;
	v->a[32579] = anon_sym_DQUOTE;
	small_parse_table_1629(v);
}

void	small_parse_table_1629(t_small_parse_table_array *v)
{
	v->a[32580] = actions(67);
	v->a[32581] = 1;
	v->a[32582] = anon_sym_DOLLAR_LBRACE;
	v->a[32583] = actions(69);
	v->a[32584] = 1;
	v->a[32585] = anon_sym_DOLLAR_LPAREN;
	v->a[32586] = actions(71);
	v->a[32587] = 1;
	v->a[32588] = anon_sym_BQUOTE;
	v->a[32589] = actions(75);
	v->a[32590] = 1;
	v->a[32591] = sym_variable_name;
	v->a[32592] = actions(1201);
	v->a[32593] = 1;
	v->a[32594] = sym_file_descriptor;
	v->a[32595] = state(187);
	v->a[32596] = 1;
	v->a[32597] = sym_command_name;
	v->a[32598] = state(647);
	v->a[32599] = 1;
	small_parse_table_1630(v);
}

/* EOF small_parse_table_325.c */
