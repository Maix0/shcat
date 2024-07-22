/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_665.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3325(t_small_parse_table_array *v)
{
	v->a[66500] = actions(2217);
	v->a[66501] = 2;
	v->a[66502] = sym_file_descriptor;
	v->a[66503] = aux_sym_heredoc_redirect_token1;
	v->a[66504] = actions(2219);
	v->a[66505] = 15;
	v->a[66506] = anon_sym_esac;
	v->a[66507] = anon_sym_PIPE;
	v->a[66508] = anon_sym_SEMI_SEMI;
	v->a[66509] = anon_sym_AMP_AMP;
	v->a[66510] = anon_sym_PIPE_PIPE;
	v->a[66511] = anon_sym_LT;
	v->a[66512] = anon_sym_GT;
	v->a[66513] = anon_sym_GT_GT;
	v->a[66514] = anon_sym_LT_AMP;
	v->a[66515] = anon_sym_GT_AMP;
	v->a[66516] = anon_sym_GT_PIPE;
	v->a[66517] = anon_sym_LT_GT;
	v->a[66518] = anon_sym_LT_LT;
	v->a[66519] = anon_sym_LT_LT_DASH;
	small_parse_table_3326(v);
}

void	small_parse_table_3326(t_small_parse_table_array *v)
{
	v->a[66520] = anon_sym_SEMI;
	v->a[66521] = 3;
	v->a[66522] = actions(3);
	v->a[66523] = 1;
	v->a[66524] = sym_comment;
	v->a[66525] = actions(2083);
	v->a[66526] = 2;
	v->a[66527] = sym_file_descriptor;
	v->a[66528] = aux_sym_heredoc_redirect_token1;
	v->a[66529] = actions(2085);
	v->a[66530] = 15;
	v->a[66531] = anon_sym_esac;
	v->a[66532] = anon_sym_PIPE;
	v->a[66533] = anon_sym_SEMI_SEMI;
	v->a[66534] = anon_sym_AMP_AMP;
	v->a[66535] = anon_sym_PIPE_PIPE;
	v->a[66536] = anon_sym_LT;
	v->a[66537] = anon_sym_GT;
	v->a[66538] = anon_sym_GT_GT;
	v->a[66539] = anon_sym_LT_AMP;
	small_parse_table_3327(v);
}

void	small_parse_table_3327(t_small_parse_table_array *v)
{
	v->a[66540] = anon_sym_GT_AMP;
	v->a[66541] = anon_sym_GT_PIPE;
	v->a[66542] = anon_sym_LT_GT;
	v->a[66543] = anon_sym_LT_LT;
	v->a[66544] = anon_sym_LT_LT_DASH;
	v->a[66545] = anon_sym_SEMI;
	v->a[66546] = 12;
	v->a[66547] = actions(3);
	v->a[66548] = 1;
	v->a[66549] = sym_comment;
	v->a[66550] = actions(1012);
	v->a[66551] = 1;
	v->a[66552] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66553] = actions(1014);
	v->a[66554] = 1;
	v->a[66555] = anon_sym_DOLLAR;
	v->a[66556] = actions(1016);
	v->a[66557] = 1;
	v->a[66558] = anon_sym_DQUOTE;
	v->a[66559] = actions(1018);
	small_parse_table_3328(v);
}

void	small_parse_table_3328(t_small_parse_table_array *v)
{
	v->a[66560] = 1;
	v->a[66561] = anon_sym_DOLLAR_LBRACE;
	v->a[66562] = actions(1020);
	v->a[66563] = 1;
	v->a[66564] = anon_sym_DOLLAR_LPAREN;
	v->a[66565] = actions(1022);
	v->a[66566] = 1;
	v->a[66567] = anon_sym_BQUOTE;
	v->a[66568] = actions(2647);
	v->a[66569] = 1;
	v->a[66570] = aux_sym_heredoc_redirect_token1;
	v->a[66571] = state(1250);
	v->a[66572] = 1;
	v->a[66573] = aux_sym__heredoc_command;
	v->a[66574] = state(1722);
	v->a[66575] = 1;
	v->a[66576] = sym_concatenation;
	v->a[66577] = actions(1002);
	v->a[66578] = 3;
	v->a[66579] = sym_raw_string;
	small_parse_table_3329(v);
}

void	small_parse_table_3329(t_small_parse_table_array *v)
{
	v->a[66580] = sym_number;
	v->a[66581] = sym_word;
	v->a[66582] = state(1516);
	v->a[66583] = 5;
	v->a[66584] = sym_arithmetic_expansion;
	v->a[66585] = sym_string;
	v->a[66586] = sym_simple_expansion;
	v->a[66587] = sym_expansion;
	v->a[66588] = sym_command_substitution;
	v->a[66589] = 10;
	v->a[66590] = actions(3);
	v->a[66591] = 1;
	v->a[66592] = sym_comment;
	v->a[66593] = actions(2651);
	v->a[66594] = 1;
	v->a[66595] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66596] = actions(2653);
	v->a[66597] = 1;
	v->a[66598] = anon_sym_DOLLAR;
	v->a[66599] = actions(2655);
	small_parse_table_3330(v);
}

/* EOF small_parse_table_665.c */
