/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_565.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2825(t_small_parse_table_array *v)
{
	v->a[56500] = sym_raw_string;
	v->a[56501] = sym_number;
	v->a[56502] = sym_word;
	v->a[56503] = state(1804);
	v->a[56504] = 5;
	v->a[56505] = sym_arithmetic_expansion;
	v->a[56506] = sym_string;
	v->a[56507] = sym_simple_expansion;
	v->a[56508] = sym_expansion;
	v->a[56509] = sym_command_substitution;
	v->a[56510] = 16;
	v->a[56511] = actions(3);
	v->a[56512] = 1;
	v->a[56513] = sym_comment;
	v->a[56514] = actions(1634);
	v->a[56515] = 1;
	v->a[56516] = anon_sym_LPAREN;
	v->a[56517] = actions(1638);
	v->a[56518] = 1;
	v->a[56519] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2826(v);
}

void	small_parse_table_2826(t_small_parse_table_array *v)
{
	v->a[56520] = actions(1640);
	v->a[56521] = 1;
	v->a[56522] = anon_sym_DOLLAR;
	v->a[56523] = actions(1642);
	v->a[56524] = 1;
	v->a[56525] = anon_sym_DQUOTE;
	v->a[56526] = actions(1644);
	v->a[56527] = 1;
	v->a[56528] = anon_sym_DOLLAR_LBRACE;
	v->a[56529] = actions(1646);
	v->a[56530] = 1;
	v->a[56531] = anon_sym_DOLLAR_LPAREN;
	v->a[56532] = actions(1648);
	v->a[56533] = 1;
	v->a[56534] = anon_sym_BQUOTE;
	v->a[56535] = actions(1650);
	v->a[56536] = 1;
	v->a[56537] = sym_extglob_pattern;
	v->a[56538] = actions(1689);
	v->a[56539] = 1;
	small_parse_table_2827(v);
}

void	small_parse_table_2827(t_small_parse_table_array *v)
{
	v->a[56540] = anon_sym_esac;
	v->a[56541] = state(1087);
	v->a[56542] = 1;
	v->a[56543] = aux_sym_case_statement_repeat1;
	v->a[56544] = state(1713);
	v->a[56545] = 1;
	v->a[56546] = sym_case_item;
	v->a[56547] = state(1966);
	v->a[56548] = 1;
	v->a[56549] = sym__case_item_last;
	v->a[56550] = state(1871);
	v->a[56551] = 2;
	v->a[56552] = sym_concatenation;
	v->a[56553] = sym__extglob_blob;
	v->a[56554] = actions(1630);
	v->a[56555] = 3;
	v->a[56556] = sym_raw_string;
	v->a[56557] = sym_number;
	v->a[56558] = sym_word;
	v->a[56559] = state(1804);
	small_parse_table_2828(v);
}

void	small_parse_table_2828(t_small_parse_table_array *v)
{
	v->a[56560] = 5;
	v->a[56561] = sym_arithmetic_expansion;
	v->a[56562] = sym_string;
	v->a[56563] = sym_simple_expansion;
	v->a[56564] = sym_expansion;
	v->a[56565] = sym_command_substitution;
	v->a[56566] = 11;
	v->a[56567] = actions(3);
	v->a[56568] = 1;
	v->a[56569] = sym_comment;
	v->a[56570] = actions(736);
	v->a[56571] = 1;
	v->a[56572] = anon_sym_PIPE;
	v->a[56573] = actions(842);
	v->a[56574] = 1;
	v->a[56575] = anon_sym_RPAREN;
	v->a[56576] = actions(1865);
	v->a[56577] = 1;
	v->a[56578] = aux_sym_heredoc_redirect_token1;
	v->a[56579] = actions(1881);
	small_parse_table_2829(v);
}

void	small_parse_table_2829(t_small_parse_table_array *v)
{
	v->a[56580] = 1;
	v->a[56581] = sym_file_descriptor;
	v->a[56582] = state(670);
	v->a[56583] = 1;
	v->a[56584] = sym_terminator;
	v->a[56585] = actions(742);
	v->a[56586] = 2;
	v->a[56587] = anon_sym_AMP_AMP;
	v->a[56588] = anon_sym_PIPE_PIPE;
	v->a[56589] = actions(744);
	v->a[56590] = 2;
	v->a[56591] = anon_sym_LT_LT;
	v->a[56592] = anon_sym_LT_LT_DASH;
	v->a[56593] = actions(740);
	v->a[56594] = 3;
	v->a[56595] = anon_sym_SEMI_SEMI;
	v->a[56596] = anon_sym_AMP;
	v->a[56597] = anon_sym_SEMI;
	v->a[56598] = state(1080);
	v->a[56599] = 3;
	small_parse_table_2830(v);
}

/* EOF small_parse_table_565.c */
