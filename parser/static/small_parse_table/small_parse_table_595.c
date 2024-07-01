/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_595.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2975(t_small_parse_table_array *v)
{
	v->a[59500] = 1;
	v->a[59501] = aux_sym_heredoc_redirect_token1;
	v->a[59502] = actions(2019);
	v->a[59503] = 1;
	v->a[59504] = sym_file_descriptor;
	v->a[59505] = state(703);
	v->a[59506] = 1;
	v->a[59507] = sym_terminator;
	v->a[59508] = actions(684);
	v->a[59509] = 2;
	v->a[59510] = anon_sym_AMP_AMP;
	v->a[59511] = anon_sym_PIPE_PIPE;
	v->a[59512] = actions(686);
	v->a[59513] = 2;
	v->a[59514] = anon_sym_LT_LT;
	v->a[59515] = anon_sym_LT_LT_DASH;
	v->a[59516] = actions(688);
	v->a[59517] = 2;
	v->a[59518] = anon_sym_AMP;
	v->a[59519] = anon_sym_SEMI;
	small_parse_table_2976(v);
}

void	small_parse_table_2976(t_small_parse_table_array *v)
{
	v->a[59520] = actions(695);
	v->a[59521] = 2;
	v->a[59522] = anon_sym_esac;
	v->a[59523] = anon_sym_SEMI_SEMI;
	v->a[59524] = actions(2015);
	v->a[59525] = 2;
	v->a[59526] = anon_sym_LT_AMP_DASH;
	v->a[59527] = anon_sym_GT_AMP_DASH;
	v->a[59528] = state(1176);
	v->a[59529] = 3;
	v->a[59530] = sym_file_redirect;
	v->a[59531] = sym_heredoc_redirect;
	v->a[59532] = aux_sym_redirected_statement_repeat1;
	v->a[59533] = actions(2013);
	v->a[59534] = 6;
	v->a[59535] = anon_sym_LT;
	v->a[59536] = anon_sym_GT;
	v->a[59537] = anon_sym_GT_GT;
	v->a[59538] = anon_sym_LT_AMP;
	v->a[59539] = anon_sym_GT_AMP;
	small_parse_table_2977(v);
}

void	small_parse_table_2977(t_small_parse_table_array *v)
{
	v->a[59540] = anon_sym_GT_PIPE;
	v->a[59541] = 12;
	v->a[59542] = actions(3);
	v->a[59543] = 1;
	v->a[59544] = sym_comment;
	v->a[59545] = actions(682);
	v->a[59546] = 1;
	v->a[59547] = anon_sym_PIPE;
	v->a[59548] = actions(2017);
	v->a[59549] = 1;
	v->a[59550] = aux_sym_heredoc_redirect_token1;
	v->a[59551] = actions(2019);
	v->a[59552] = 1;
	v->a[59553] = sym_file_descriptor;
	v->a[59554] = state(701);
	v->a[59555] = 1;
	v->a[59556] = sym_terminator;
	v->a[59557] = actions(684);
	v->a[59558] = 2;
	v->a[59559] = anon_sym_AMP_AMP;
	small_parse_table_2978(v);
}

void	small_parse_table_2978(t_small_parse_table_array *v)
{
	v->a[59560] = anon_sym_PIPE_PIPE;
	v->a[59561] = actions(686);
	v->a[59562] = 2;
	v->a[59563] = anon_sym_LT_LT;
	v->a[59564] = anon_sym_LT_LT_DASH;
	v->a[59565] = actions(688);
	v->a[59566] = 2;
	v->a[59567] = anon_sym_AMP;
	v->a[59568] = anon_sym_SEMI;
	v->a[59569] = actions(695);
	v->a[59570] = 2;
	v->a[59571] = anon_sym_esac;
	v->a[59572] = anon_sym_SEMI_SEMI;
	v->a[59573] = actions(2015);
	v->a[59574] = 2;
	v->a[59575] = anon_sym_LT_AMP_DASH;
	v->a[59576] = anon_sym_GT_AMP_DASH;
	v->a[59577] = state(1176);
	v->a[59578] = 3;
	v->a[59579] = sym_file_redirect;
	small_parse_table_2979(v);
}

void	small_parse_table_2979(t_small_parse_table_array *v)
{
	v->a[59580] = sym_heredoc_redirect;
	v->a[59581] = aux_sym_redirected_statement_repeat1;
	v->a[59582] = actions(2013);
	v->a[59583] = 6;
	v->a[59584] = anon_sym_LT;
	v->a[59585] = anon_sym_GT;
	v->a[59586] = anon_sym_GT_GT;
	v->a[59587] = anon_sym_LT_AMP;
	v->a[59588] = anon_sym_GT_AMP;
	v->a[59589] = anon_sym_GT_PIPE;
	v->a[59590] = 3;
	v->a[59591] = actions(3);
	v->a[59592] = 1;
	v->a[59593] = sym_comment;
	v->a[59594] = actions(1037);
	v->a[59595] = 2;
	v->a[59596] = sym_file_descriptor;
	v->a[59597] = sym__concat;
	v->a[59598] = actions(1035);
	v->a[59599] = 21;
	small_parse_table_2980(v);
}

/* EOF small_parse_table_595.c */
