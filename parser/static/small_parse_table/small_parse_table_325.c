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
	v->a[32500] = state(1468);
	v->a[32501] = 5;
	v->a[32502] = sym_arithmetic_expansion;
	v->a[32503] = sym_string;
	v->a[32504] = sym_simple_expansion;
	v->a[32505] = sym_expansion;
	v->a[32506] = sym_command_substitution;
	v->a[32507] = 6;
	v->a[32508] = actions(3);
	v->a[32509] = 1;
	v->a[32510] = sym_comment;
	v->a[32511] = actions(1257);
	v->a[32512] = 1;
	v->a[32513] = sym_variable_name;
	v->a[32514] = actions(1326);
	v->a[32515] = 1;
	v->a[32516] = anon_sym_RPAREN;
	v->a[32517] = actions(1254);
	v->a[32518] = 3;
	v->a[32519] = anon_sym_LT;
	small_parse_table_1626(v);
}

void	small_parse_table_1626(t_small_parse_table_array *v)
{
	v->a[32520] = anon_sym_GT;
	v->a[32521] = anon_sym_GT_GT;
	v->a[32522] = actions(1249);
	v->a[32523] = 7;
	v->a[32524] = anon_sym_PIPE;
	v->a[32525] = anon_sym_SEMI_SEMI;
	v->a[32526] = anon_sym_AMP_AMP;
	v->a[32527] = anon_sym_PIPE_PIPE;
	v->a[32528] = anon_sym_LT_LT;
	v->a[32529] = aux_sym_heredoc_redirect_token1;
	v->a[32530] = anon_sym_SEMI;
	v->a[32531] = actions(1247);
	v->a[32532] = 9;
	v->a[32533] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32534] = anon_sym_DOLLAR;
	v->a[32535] = anon_sym_DQUOTE;
	v->a[32536] = sym_raw_string;
	v->a[32537] = sym_number;
	v->a[32538] = anon_sym_DOLLAR_LBRACE;
	v->a[32539] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1627(v);
}

void	small_parse_table_1627(t_small_parse_table_array *v)
{
	v->a[32540] = anon_sym_BQUOTE;
	v->a[32541] = sym_word;
	v->a[32542] = 6;
	v->a[32543] = actions(3);
	v->a[32544] = 1;
	v->a[32545] = sym_comment;
	v->a[32546] = actions(1257);
	v->a[32547] = 1;
	v->a[32548] = sym_variable_name;
	v->a[32549] = actions(1329);
	v->a[32550] = 1;
	v->a[32551] = anon_sym_RPAREN;
	v->a[32552] = actions(1254);
	v->a[32553] = 3;
	v->a[32554] = anon_sym_LT;
	v->a[32555] = anon_sym_GT;
	v->a[32556] = anon_sym_GT_GT;
	v->a[32557] = actions(1249);
	v->a[32558] = 7;
	v->a[32559] = anon_sym_PIPE;
	small_parse_table_1628(v);
}

void	small_parse_table_1628(t_small_parse_table_array *v)
{
	v->a[32560] = anon_sym_SEMI_SEMI;
	v->a[32561] = anon_sym_AMP_AMP;
	v->a[32562] = anon_sym_PIPE_PIPE;
	v->a[32563] = anon_sym_LT_LT;
	v->a[32564] = aux_sym_heredoc_redirect_token1;
	v->a[32565] = anon_sym_SEMI;
	v->a[32566] = actions(1247);
	v->a[32567] = 9;
	v->a[32568] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32569] = anon_sym_DOLLAR;
	v->a[32570] = anon_sym_DQUOTE;
	v->a[32571] = sym_raw_string;
	v->a[32572] = sym_number;
	v->a[32573] = anon_sym_DOLLAR_LBRACE;
	v->a[32574] = anon_sym_DOLLAR_LPAREN;
	v->a[32575] = anon_sym_BQUOTE;
	v->a[32576] = sym_word;
	v->a[32577] = 6;
	v->a[32578] = actions(3);
	v->a[32579] = 1;
	small_parse_table_1629(v);
}

void	small_parse_table_1629(t_small_parse_table_array *v)
{
	v->a[32580] = sym_comment;
	v->a[32581] = actions(857);
	v->a[32582] = 1;
	v->a[32583] = aux_sym_concatenation_token1;
	v->a[32584] = actions(921);
	v->a[32585] = 1;
	v->a[32586] = sym__bare_dollar;
	v->a[32587] = actions(1332);
	v->a[32588] = 1;
	v->a[32589] = sym__concat;
	v->a[32590] = state(270);
	v->a[32591] = 1;
	v->a[32592] = aux_sym_concatenation_repeat1;
	v->a[32593] = actions(923);
	v->a[32594] = 17;
	v->a[32595] = anon_sym_PIPE;
	v->a[32596] = anon_sym_AMP_AMP;
	v->a[32597] = anon_sym_PIPE_PIPE;
	v->a[32598] = anon_sym_LT;
	v->a[32599] = anon_sym_GT;
	small_parse_table_1630(v);
}

/* EOF small_parse_table_325.c */
