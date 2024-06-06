/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_987.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4935(t_small_parse_table_array *v)
{
	v->a[98700] = anon_sym_GT;
	v->a[98701] = anon_sym_GT_GT;
	v->a[98702] = anon_sym_AMP_GT;
	v->a[98703] = anon_sym_AMP_GT_GT;
	v->a[98704] = anon_sym_LT_AMP;
	v->a[98705] = anon_sym_GT_AMP;
	v->a[98706] = anon_sym_GT_PIPE;
	v->a[98707] = 7;
	v->a[98708] = actions(3);
	v->a[98709] = 1;
	v->a[98710] = sym_comment;
	v->a[98711] = actions(5258);
	v->a[98712] = 1;
	v->a[98713] = sym_file_descriptor;
	v->a[98714] = actions(5443);
	v->a[98715] = 1;
	v->a[98716] = aux_sym_heredoc_redirect_token1;
	v->a[98717] = state(2222);
	v->a[98718] = 1;
	v->a[98719] = sym_file_redirect;
	small_parse_table_4936(v);
}

void	small_parse_table_4936(t_small_parse_table_array *v)
{
	v->a[98720] = actions(5155);
	v->a[98721] = 2;
	v->a[98722] = anon_sym_LT_AMP_DASH;
	v->a[98723] = anon_sym_GT_AMP_DASH;
	v->a[98724] = actions(5153);
	v->a[98725] = 8;
	v->a[98726] = anon_sym_LT;
	v->a[98727] = anon_sym_GT;
	v->a[98728] = anon_sym_GT_GT;
	v->a[98729] = anon_sym_AMP_GT;
	v->a[98730] = anon_sym_AMP_GT_GT;
	v->a[98731] = anon_sym_LT_AMP;
	v->a[98732] = anon_sym_GT_AMP;
	v->a[98733] = anon_sym_GT_PIPE;
	v->a[98734] = actions(5441);
	v->a[98735] = 12;
	v->a[98736] = anon_sym_esac;
	v->a[98737] = anon_sym_PIPE;
	v->a[98738] = anon_sym_SEMI_SEMI;
	v->a[98739] = anon_sym_SEMI_AMP;
	small_parse_table_4937(v);
}

void	small_parse_table_4937(t_small_parse_table_array *v)
{
	v->a[98740] = anon_sym_SEMI_SEMI_AMP;
	v->a[98741] = anon_sym_PIPE_AMP;
	v->a[98742] = anon_sym_AMP_AMP;
	v->a[98743] = anon_sym_PIPE_PIPE;
	v->a[98744] = anon_sym_LT_LT;
	v->a[98745] = anon_sym_LT_LT_DASH;
	v->a[98746] = anon_sym_AMP;
	v->a[98747] = anon_sym_SEMI;
	v->a[98748] = 19;
	v->a[98749] = actions(3);
	v->a[98750] = 1;
	v->a[98751] = sym_comment;
	v->a[98752] = actions(5407);
	v->a[98753] = 1;
	v->a[98754] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98755] = actions(5409);
	v->a[98756] = 1;
	v->a[98757] = anon_sym_DOLLAR;
	v->a[98758] = actions(5413);
	v->a[98759] = 1;
	small_parse_table_4938(v);
}

void	small_parse_table_4938(t_small_parse_table_array *v)
{
	v->a[98760] = anon_sym_DQUOTE;
	v->a[98761] = actions(5417);
	v->a[98762] = 1;
	v->a[98763] = aux_sym_number_token1;
	v->a[98764] = actions(5419);
	v->a[98765] = 1;
	v->a[98766] = aux_sym_number_token2;
	v->a[98767] = actions(5421);
	v->a[98768] = 1;
	v->a[98769] = anon_sym_DOLLAR_LBRACE;
	v->a[98770] = actions(5423);
	v->a[98771] = 1;
	v->a[98772] = anon_sym_DOLLAR_LPAREN;
	v->a[98773] = actions(5425);
	v->a[98774] = 1;
	v->a[98775] = anon_sym_BQUOTE;
	v->a[98776] = actions(5427);
	v->a[98777] = 1;
	v->a[98778] = anon_sym_DOLLAR_BQUOTE;
	v->a[98779] = actions(5429);
	small_parse_table_4939(v);
}

void	small_parse_table_4939(t_small_parse_table_array *v)
{
	v->a[98780] = 1;
	v->a[98781] = sym__comment_word;
	v->a[98782] = actions(5431);
	v->a[98783] = 1;
	v->a[98784] = sym__empty_value;
	v->a[98785] = actions(5433);
	v->a[98786] = 1;
	v->a[98787] = sym__brace_start;
	v->a[98788] = actions(5445);
	v->a[98789] = 1;
	v->a[98790] = sym_word;
	v->a[98791] = actions(5447);
	v->a[98792] = 1;
	v->a[98793] = sym__special_character;
	v->a[98794] = state(1916);
	v->a[98795] = 1;
	v->a[98796] = aux_sym__literal_repeat1;
	v->a[98797] = state(2141);
	v->a[98798] = 1;
	v->a[98799] = sym_concatenation;
	small_parse_table_4940(v);
}

/* EOF small_parse_table_987.c */
