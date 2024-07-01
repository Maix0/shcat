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
	v->a[32500] = 1;
	v->a[32501] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32502] = actions(461);
	v->a[32503] = 1;
	v->a[32504] = anon_sym_DOLLAR;
	v->a[32505] = actions(463);
	v->a[32506] = 1;
	v->a[32507] = anon_sym_DQUOTE;
	v->a[32508] = actions(465);
	v->a[32509] = 1;
	v->a[32510] = anon_sym_DOLLAR_LBRACE;
	v->a[32511] = actions(467);
	v->a[32512] = 1;
	v->a[32513] = anon_sym_DOLLAR_LPAREN;
	v->a[32514] = actions(469);
	v->a[32515] = 1;
	v->a[32516] = anon_sym_BQUOTE;
	v->a[32517] = actions(471);
	v->a[32518] = 1;
	v->a[32519] = sym__bare_dollar;
	small_parse_table_1626(v);
}

void	small_parse_table_1626(t_small_parse_table_array *v)
{
	v->a[32520] = actions(558);
	v->a[32521] = 1;
	v->a[32522] = sym_file_descriptor;
	v->a[32523] = state(387);
	v->a[32524] = 1;
	v->a[32525] = aux_sym_command_repeat2;
	v->a[32526] = state(627);
	v->a[32527] = 1;
	v->a[32528] = sym_concatenation;
	v->a[32529] = actions(910);
	v->a[32530] = 3;
	v->a[32531] = sym_raw_string;
	v->a[32532] = sym_number;
	v->a[32533] = sym_word;
	v->a[32534] = state(759);
	v->a[32535] = 5;
	v->a[32536] = sym_arithmetic_expansion;
	v->a[32537] = sym_string;
	v->a[32538] = sym_simple_expansion;
	v->a[32539] = sym_expansion;
	small_parse_table_1627(v);
}

void	small_parse_table_1627(t_small_parse_table_array *v)
{
	v->a[32540] = sym_command_substitution;
	v->a[32541] = actions(556);
	v->a[32542] = 13;
	v->a[32543] = anon_sym_PIPE;
	v->a[32544] = anon_sym_AMP_AMP;
	v->a[32545] = anon_sym_PIPE_PIPE;
	v->a[32546] = anon_sym_LT;
	v->a[32547] = anon_sym_GT;
	v->a[32548] = anon_sym_GT_GT;
	v->a[32549] = anon_sym_LT_AMP;
	v->a[32550] = anon_sym_GT_AMP;
	v->a[32551] = anon_sym_GT_PIPE;
	v->a[32552] = anon_sym_LT_GT;
	v->a[32553] = anon_sym_LT_LT;
	v->a[32554] = anon_sym_LT_LT_DASH;
	v->a[32555] = aux_sym_heredoc_redirect_token1;
	v->a[32556] = 6;
	v->a[32557] = actions(3);
	v->a[32558] = 1;
	v->a[32559] = sym_comment;
	small_parse_table_1628(v);
}

void	small_parse_table_1628(t_small_parse_table_array *v)
{
	v->a[32560] = actions(1203);
	v->a[32561] = 1;
	v->a[32562] = aux_sym_concatenation_token1;
	v->a[32563] = actions(1205);
	v->a[32564] = 1;
	v->a[32565] = sym__concat;
	v->a[32566] = state(410);
	v->a[32567] = 1;
	v->a[32568] = aux_sym_concatenation_repeat1;
	v->a[32569] = actions(1209);
	v->a[32570] = 3;
	v->a[32571] = sym_file_descriptor;
	v->a[32572] = sym_variable_name;
	v->a[32573] = ts_builtin_sym_end;
	v->a[32574] = actions(1207);
	v->a[32575] = 25;
	v->a[32576] = anon_sym_PIPE;
	v->a[32577] = anon_sym_SEMI_SEMI;
	v->a[32578] = anon_sym_AMP_AMP;
	v->a[32579] = anon_sym_PIPE_PIPE;
	small_parse_table_1629(v);
}

void	small_parse_table_1629(t_small_parse_table_array *v)
{
	v->a[32580] = anon_sym_LT;
	v->a[32581] = anon_sym_GT;
	v->a[32582] = anon_sym_GT_GT;
	v->a[32583] = anon_sym_LT_AMP;
	v->a[32584] = anon_sym_GT_AMP;
	v->a[32585] = anon_sym_GT_PIPE;
	v->a[32586] = anon_sym_LT_GT;
	v->a[32587] = anon_sym_LT_LT;
	v->a[32588] = anon_sym_LT_LT_DASH;
	v->a[32589] = aux_sym_heredoc_redirect_token1;
	v->a[32590] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32591] = anon_sym_AMP;
	v->a[32592] = anon_sym_DOLLAR;
	v->a[32593] = anon_sym_DQUOTE;
	v->a[32594] = sym_raw_string;
	v->a[32595] = sym_number;
	v->a[32596] = anon_sym_DOLLAR_LBRACE;
	v->a[32597] = anon_sym_DOLLAR_LPAREN;
	v->a[32598] = anon_sym_BQUOTE;
	v->a[32599] = sym_word;
	small_parse_table_1630(v);
}

/* EOF small_parse_table_325.c */
