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
	v->a[32500] = anon_sym_GT_PIPE;
	v->a[32501] = anon_sym_LT_GT;
	v->a[32502] = anon_sym_LT_LT;
	v->a[32503] = anon_sym_LT_LT_DASH;
	v->a[32504] = aux_sym_heredoc_redirect_token1;
	v->a[32505] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32506] = aux_sym_concatenation_token1;
	v->a[32507] = anon_sym_DOLLAR;
	v->a[32508] = anon_sym_DQUOTE;
	v->a[32509] = sym_raw_string;
	v->a[32510] = sym_number;
	v->a[32511] = anon_sym_DOLLAR_LBRACE;
	v->a[32512] = anon_sym_DOLLAR_LPAREN;
	v->a[32513] = anon_sym_BQUOTE;
	v->a[32514] = sym_word;
	v->a[32515] = anon_sym_SEMI;
	v->a[32516] = 15;
	v->a[32517] = actions(3);
	v->a[32518] = 1;
	v->a[32519] = sym_comment;
	small_parse_table_1626(v);
}

void	small_parse_table_1626(t_small_parse_table_array *v)
{
	v->a[32520] = actions(53);
	v->a[32521] = 1;
	v->a[32522] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32523] = actions(55);
	v->a[32524] = 1;
	v->a[32525] = anon_sym_DOLLAR;
	v->a[32526] = actions(57);
	v->a[32527] = 1;
	v->a[32528] = anon_sym_DQUOTE;
	v->a[32529] = actions(61);
	v->a[32530] = 1;
	v->a[32531] = anon_sym_DOLLAR_LBRACE;
	v->a[32532] = actions(63);
	v->a[32533] = 1;
	v->a[32534] = anon_sym_DOLLAR_LPAREN;
	v->a[32535] = actions(65);
	v->a[32536] = 1;
	v->a[32537] = anon_sym_BQUOTE;
	v->a[32538] = actions(341);
	v->a[32539] = 1;
	small_parse_table_1627(v);
}

void	small_parse_table_1627(t_small_parse_table_array *v)
{
	v->a[32540] = sym_variable_name;
	v->a[32541] = state(267);
	v->a[32542] = 1;
	v->a[32543] = sym_command_name;
	v->a[32544] = state(602);
	v->a[32545] = 1;
	v->a[32546] = sym_concatenation;
	v->a[32547] = state(1073);
	v->a[32548] = 1;
	v->a[32549] = sym_file_redirect;
	v->a[32550] = state(823);
	v->a[32551] = 2;
	v->a[32552] = sym_variable_assignment;
	v->a[32553] = aux_sym_command_repeat1;
	v->a[32554] = actions(59);
	v->a[32555] = 3;
	v->a[32556] = sym_raw_string;
	v->a[32557] = sym_number;
	v->a[32558] = sym_word;
	v->a[32559] = state(425);
	small_parse_table_1628(v);
}

void	small_parse_table_1628(t_small_parse_table_array *v)
{
	v->a[32560] = 5;
	v->a[32561] = sym_arithmetic_expansion;
	v->a[32562] = sym_string;
	v->a[32563] = sym_simple_expansion;
	v->a[32564] = sym_expansion;
	v->a[32565] = sym_command_substitution;
	v->a[32566] = actions(965);
	v->a[32567] = 7;
	v->a[32568] = anon_sym_LT;
	v->a[32569] = anon_sym_GT;
	v->a[32570] = anon_sym_GT_GT;
	v->a[32571] = anon_sym_LT_AMP;
	v->a[32572] = anon_sym_GT_AMP;
	v->a[32573] = anon_sym_GT_PIPE;
	v->a[32574] = anon_sym_LT_GT;
	v->a[32575] = 3;
	v->a[32576] = actions(3);
	v->a[32577] = 1;
	v->a[32578] = sym_comment;
	v->a[32579] = actions(1011);
	small_parse_table_1629(v);
}

void	small_parse_table_1629(t_small_parse_table_array *v)
{
	v->a[32580] = 1;
	v->a[32581] = sym__concat;
	v->a[32582] = actions(1003);
	v->a[32583] = 26;
	v->a[32584] = anon_sym_esac;
	v->a[32585] = anon_sym_PIPE;
	v->a[32586] = anon_sym_SEMI_SEMI;
	v->a[32587] = anon_sym_AMP_AMP;
	v->a[32588] = anon_sym_PIPE_PIPE;
	v->a[32589] = anon_sym_LT;
	v->a[32590] = anon_sym_GT;
	v->a[32591] = anon_sym_GT_GT;
	v->a[32592] = anon_sym_LT_AMP;
	v->a[32593] = anon_sym_GT_AMP;
	v->a[32594] = anon_sym_GT_PIPE;
	v->a[32595] = anon_sym_LT_GT;
	v->a[32596] = anon_sym_LT_LT;
	v->a[32597] = anon_sym_LT_LT_DASH;
	v->a[32598] = aux_sym_heredoc_redirect_token1;
	v->a[32599] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1630(v);
}

/* EOF small_parse_table_325.c */
