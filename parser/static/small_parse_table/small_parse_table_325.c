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
	v->a[32500] = sym_comment;
	v->a[32501] = actions(1212);
	v->a[32502] = 1;
	v->a[32503] = aux_sym_concatenation_token1;
	v->a[32504] = actions(1215);
	v->a[32505] = 1;
	v->a[32506] = sym__concat;
	v->a[32507] = state(392);
	v->a[32508] = 1;
	v->a[32509] = aux_sym_concatenation_repeat1;
	v->a[32510] = actions(1194);
	v->a[32511] = 2;
	v->a[32512] = sym_file_descriptor;
	v->a[32513] = sym__bare_dollar;
	v->a[32514] = actions(1189);
	v->a[32515] = 28;
	v->a[32516] = anon_sym_esac;
	v->a[32517] = anon_sym_LPAREN;
	v->a[32518] = anon_sym_PIPE;
	v->a[32519] = anon_sym_SEMI_SEMI;
	small_parse_table_1626(v);
}

void	small_parse_table_1626(t_small_parse_table_array *v)
{
	v->a[32520] = anon_sym_AMP_AMP;
	v->a[32521] = anon_sym_PIPE_PIPE;
	v->a[32522] = anon_sym_LT;
	v->a[32523] = anon_sym_GT;
	v->a[32524] = anon_sym_GT_GT;
	v->a[32525] = anon_sym_LT_AMP;
	v->a[32526] = anon_sym_GT_AMP;
	v->a[32527] = anon_sym_GT_PIPE;
	v->a[32528] = anon_sym_LT_AMP_DASH;
	v->a[32529] = anon_sym_GT_AMP_DASH;
	v->a[32530] = anon_sym_LT_LT;
	v->a[32531] = anon_sym_LT_LT_DASH;
	v->a[32532] = aux_sym_heredoc_redirect_token1;
	v->a[32533] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32534] = anon_sym_AMP;
	v->a[32535] = anon_sym_DOLLAR;
	v->a[32536] = anon_sym_DQUOTE;
	v->a[32537] = sym_raw_string;
	v->a[32538] = sym_number;
	v->a[32539] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1627(v);
}

void	small_parse_table_1627(t_small_parse_table_array *v)
{
	v->a[32540] = anon_sym_DOLLAR_LPAREN;
	v->a[32541] = anon_sym_BQUOTE;
	v->a[32542] = sym_word;
	v->a[32543] = anon_sym_SEMI;
	v->a[32544] = 17;
	v->a[32545] = actions(842);
	v->a[32546] = 1;
	v->a[32547] = anon_sym_PIPE;
	v->a[32548] = actions(844);
	v->a[32549] = 1;
	v->a[32550] = anon_sym_AMP_AMP;
	v->a[32551] = actions(846);
	v->a[32552] = 1;
	v->a[32553] = anon_sym_PIPE_PIPE;
	v->a[32554] = actions(856);
	v->a[32555] = 1;
	v->a[32556] = anon_sym_CARET;
	v->a[32557] = actions(858);
	v->a[32558] = 1;
	v->a[32559] = anon_sym_AMP;
	small_parse_table_1628(v);
}

void	small_parse_table_1628(t_small_parse_table_array *v)
{
	v->a[32560] = actions(870);
	v->a[32561] = 1;
	v->a[32562] = sym_comment;
	v->a[32563] = actions(1021);
	v->a[32564] = 1;
	v->a[32565] = anon_sym_EQ;
	v->a[32566] = actions(1023);
	v->a[32567] = 1;
	v->a[32568] = anon_sym_QMARK;
	v->a[32569] = actions(1218);
	v->a[32570] = 1;
	v->a[32571] = anon_sym_COLON;
	v->a[32572] = actions(850);
	v->a[32573] = 2;
	v->a[32574] = anon_sym_LT;
	v->a[32575] = anon_sym_GT;
	v->a[32576] = actions(852);
	v->a[32577] = 2;
	v->a[32578] = anon_sym_GT_GT;
	v->a[32579] = anon_sym_LT_LT;
	small_parse_table_1629(v);
}

void	small_parse_table_1629(t_small_parse_table_array *v)
{
	v->a[32580] = actions(860);
	v->a[32581] = 2;
	v->a[32582] = anon_sym_EQ_EQ;
	v->a[32583] = anon_sym_BANG_EQ;
	v->a[32584] = actions(862);
	v->a[32585] = 2;
	v->a[32586] = anon_sym_LT_EQ;
	v->a[32587] = anon_sym_GT_EQ;
	v->a[32588] = actions(864);
	v->a[32589] = 2;
	v->a[32590] = anon_sym_PLUS;
	v->a[32591] = anon_sym_DASH;
	v->a[32592] = actions(868);
	v->a[32593] = 2;
	v->a[32594] = anon_sym_PLUS_PLUS2;
	v->a[32595] = anon_sym_DASH_DASH2;
	v->a[32596] = actions(866);
	v->a[32597] = 3;
	v->a[32598] = anon_sym_STAR;
	v->a[32599] = anon_sym_SLASH;
	small_parse_table_1630(v);
}

/* EOF small_parse_table_325.c */
