/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_934.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4670(t_small_parse_table_array *v)
{
	v->a[93400] = actions(2518);
	v->a[93401] = 2;
	v->a[93402] = anon_sym_AMP_AMP;
	v->a[93403] = anon_sym_PIPE_PIPE;
	v->a[93404] = actions(2520);
	v->a[93405] = 2;
	v->a[93406] = anon_sym_LT_LT;
	v->a[93407] = anon_sym_LT_LT_DASH;
	v->a[93408] = actions(2524);
	v->a[93409] = 2;
	v->a[93410] = anon_sym_AMP;
	v->a[93411] = anon_sym_SEMI;
	v->a[93412] = actions(5155);
	v->a[93413] = 2;
	v->a[93414] = anon_sym_LT_AMP_DASH;
	v->a[93415] = anon_sym_GT_AMP_DASH;
	v->a[93416] = state(1894);
	v->a[93417] = 3;
	v->a[93418] = sym_file_redirect;
	v->a[93419] = sym_heredoc_redirect;
	small_parse_table_4671(v);
}

void	small_parse_table_4671(t_small_parse_table_array *v)
{
	v->a[93420] = aux_sym_redirected_statement_repeat1;
	v->a[93421] = actions(2514);
	v->a[93422] = 4;
	v->a[93423] = anon_sym_esac;
	v->a[93424] = anon_sym_SEMI_SEMI;
	v->a[93425] = anon_sym_SEMI_AMP;
	v->a[93426] = anon_sym_SEMI_SEMI_AMP;
	v->a[93427] = actions(5153);
	v->a[93428] = 8;
	v->a[93429] = anon_sym_LT;
	v->a[93430] = anon_sym_GT;
	v->a[93431] = anon_sym_GT_GT;
	v->a[93432] = anon_sym_AMP_GT;
	v->a[93433] = anon_sym_AMP_GT_GT;
	v->a[93434] = anon_sym_LT_AMP;
	v->a[93435] = anon_sym_GT_AMP;
	v->a[93436] = anon_sym_GT_PIPE;
	v->a[93437] = 3;
	v->a[93438] = actions(3);
	v->a[93439] = 1;
	small_parse_table_4672(v);
}

void	small_parse_table_4672(t_small_parse_table_array *v)
{
	v->a[93440] = sym_comment;
	v->a[93441] = actions(3159);
	v->a[93442] = 4;
	v->a[93443] = sym_file_descriptor;
	v->a[93444] = sym__concat;
	v->a[93445] = sym_variable_name;
	v->a[93446] = aux_sym_heredoc_redirect_token1;
	v->a[93447] = actions(3157);
	v->a[93448] = 23;
	v->a[93449] = anon_sym_esac;
	v->a[93450] = anon_sym_PIPE;
	v->a[93451] = anon_sym_SEMI_SEMI;
	v->a[93452] = anon_sym_SEMI_AMP;
	v->a[93453] = anon_sym_SEMI_SEMI_AMP;
	v->a[93454] = anon_sym_PIPE_AMP;
	v->a[93455] = anon_sym_AMP_AMP;
	v->a[93456] = anon_sym_PIPE_PIPE;
	v->a[93457] = anon_sym_LT;
	v->a[93458] = anon_sym_GT;
	v->a[93459] = anon_sym_GT_GT;
	small_parse_table_4673(v);
}

void	small_parse_table_4673(t_small_parse_table_array *v)
{
	v->a[93460] = anon_sym_AMP_GT;
	v->a[93461] = anon_sym_AMP_GT_GT;
	v->a[93462] = anon_sym_LT_AMP;
	v->a[93463] = anon_sym_GT_AMP;
	v->a[93464] = anon_sym_GT_PIPE;
	v->a[93465] = anon_sym_LT_AMP_DASH;
	v->a[93466] = anon_sym_GT_AMP_DASH;
	v->a[93467] = anon_sym_LT_LT;
	v->a[93468] = anon_sym_LT_LT_DASH;
	v->a[93469] = anon_sym_AMP;
	v->a[93470] = aux_sym_concatenation_token1;
	v->a[93471] = anon_sym_SEMI;
	v->a[93472] = 5;
	v->a[93473] = actions(3);
	v->a[93474] = 1;
	v->a[93475] = sym_comment;
	v->a[93476] = actions(5201);
	v->a[93477] = 1;
	v->a[93478] = sym__special_character;
	v->a[93479] = state(1945);
	small_parse_table_4674(v);
}

void	small_parse_table_4674(t_small_parse_table_array *v)
{
	v->a[93480] = 1;
	v->a[93481] = aux_sym__literal_repeat1;
	v->a[93482] = actions(3252);
	v->a[93483] = 4;
	v->a[93484] = sym_file_descriptor;
	v->a[93485] = sym_variable_name;
	v->a[93486] = ts_builtin_sym_end;
	v->a[93487] = aux_sym_heredoc_redirect_token1;
	v->a[93488] = actions(3250);
	v->a[93489] = 21;
	v->a[93490] = anon_sym_PIPE;
	v->a[93491] = anon_sym_RPAREN;
	v->a[93492] = anon_sym_SEMI_SEMI;
	v->a[93493] = anon_sym_PIPE_AMP;
	v->a[93494] = anon_sym_AMP_AMP;
	v->a[93495] = anon_sym_PIPE_PIPE;
	v->a[93496] = anon_sym_LT;
	v->a[93497] = anon_sym_GT;
	v->a[93498] = anon_sym_GT_GT;
	v->a[93499] = anon_sym_AMP_GT;
	small_parse_table_4675(v);
}

/* EOF small_parse_table_934.c */
