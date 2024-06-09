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
	v->a[32500] = anon_sym_LT_LT_DASH;
	v->a[32501] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32502] = anon_sym_DOLLAR;
	v->a[32503] = anon_sym_DQUOTE;
	v->a[32504] = sym_raw_string;
	v->a[32505] = aux_sym_number_token1;
	v->a[32506] = aux_sym_number_token2;
	v->a[32507] = anon_sym_DOLLAR_LBRACE;
	v->a[32508] = anon_sym_DOLLAR_LPAREN;
	v->a[32509] = anon_sym_BQUOTE;
	v->a[32510] = sym_word;
	v->a[32511] = 16;
	v->a[32512] = actions(3);
	v->a[32513] = 1;
	v->a[32514] = sym_comment;
	v->a[32515] = actions(563);
	v->a[32516] = 1;
	v->a[32517] = sym_file_descriptor;
	v->a[32518] = actions(1015);
	v->a[32519] = 1;
	small_parse_table_1626(v);
}

void	small_parse_table_1626(t_small_parse_table_array *v)
{
	v->a[32520] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32521] = actions(1017);
	v->a[32522] = 1;
	v->a[32523] = anon_sym_DOLLAR;
	v->a[32524] = actions(1019);
	v->a[32525] = 1;
	v->a[32526] = anon_sym_DQUOTE;
	v->a[32527] = actions(1021);
	v->a[32528] = 1;
	v->a[32529] = aux_sym_number_token1;
	v->a[32530] = actions(1023);
	v->a[32531] = 1;
	v->a[32532] = aux_sym_number_token2;
	v->a[32533] = actions(1025);
	v->a[32534] = 1;
	v->a[32535] = anon_sym_DOLLAR_LBRACE;
	v->a[32536] = actions(1027);
	v->a[32537] = 1;
	v->a[32538] = anon_sym_DOLLAR_LPAREN;
	v->a[32539] = actions(1029);
	small_parse_table_1627(v);
}

void	small_parse_table_1627(t_small_parse_table_array *v)
{
	v->a[32540] = 1;
	v->a[32541] = anon_sym_BQUOTE;
	v->a[32542] = actions(1031);
	v->a[32543] = 1;
	v->a[32544] = sym__bare_dollar;
	v->a[32545] = state(342);
	v->a[32546] = 1;
	v->a[32547] = aux_sym_command_repeat2;
	v->a[32548] = state(932);
	v->a[32549] = 1;
	v->a[32550] = sym_concatenation;
	v->a[32551] = actions(1013);
	v->a[32552] = 2;
	v->a[32553] = sym_raw_string;
	v->a[32554] = sym_word;
	v->a[32555] = state(800);
	v->a[32556] = 6;
	v->a[32557] = sym_arithmetic_expansion;
	v->a[32558] = sym_string;
	v->a[32559] = sym_number;
	small_parse_table_1628(v);
}

void	small_parse_table_1628(t_small_parse_table_array *v)
{
	v->a[32560] = sym_simple_expansion;
	v->a[32561] = sym_expansion;
	v->a[32562] = sym_command_substitution;
	v->a[32563] = actions(561);
	v->a[32564] = 15;
	v->a[32565] = anon_sym_PIPE;
	v->a[32566] = anon_sym_AMP_AMP;
	v->a[32567] = anon_sym_PIPE_PIPE;
	v->a[32568] = anon_sym_LT;
	v->a[32569] = anon_sym_GT;
	v->a[32570] = anon_sym_GT_GT;
	v->a[32571] = anon_sym_AMP_GT;
	v->a[32572] = anon_sym_AMP_GT_GT;
	v->a[32573] = anon_sym_LT_AMP;
	v->a[32574] = anon_sym_GT_AMP;
	v->a[32575] = anon_sym_GT_PIPE;
	v->a[32576] = anon_sym_LT_AMP_DASH;
	v->a[32577] = anon_sym_GT_AMP_DASH;
	v->a[32578] = anon_sym_LT_LT;
	v->a[32579] = anon_sym_LT_LT_DASH;
	small_parse_table_1629(v);
}

void	small_parse_table_1629(t_small_parse_table_array *v)
{
	v->a[32580] = 3;
	v->a[32581] = actions(3);
	v->a[32582] = 1;
	v->a[32583] = sym_comment;
	v->a[32584] = actions(1301);
	v->a[32585] = 3;
	v->a[32586] = sym_file_descriptor;
	v->a[32587] = sym__concat;
	v->a[32588] = sym__bare_dollar;
	v->a[32589] = actions(1299);
	v->a[32590] = 32;
	v->a[32591] = anon_sym_esac;
	v->a[32592] = anon_sym_LPAREN;
	v->a[32593] = anon_sym_PIPE;
	v->a[32594] = anon_sym_SEMI_SEMI;
	v->a[32595] = anon_sym_AMP_AMP;
	v->a[32596] = anon_sym_PIPE_PIPE;
	v->a[32597] = anon_sym_LT;
	v->a[32598] = anon_sym_GT;
	v->a[32599] = anon_sym_GT_GT;
	small_parse_table_1630(v);
}

/* EOF small_parse_table_325.c */
