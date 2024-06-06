/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1269.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6345(t_small_parse_table_array *v)
{
	v->a[126900] = anon_sym_DOLLAR;
	v->a[126901] = sym__special_character;
	v->a[126902] = anon_sym_DQUOTE;
	v->a[126903] = sym_raw_string;
	v->a[126904] = aux_sym_number_token1;
	v->a[126905] = aux_sym_number_token2;
	v->a[126906] = anon_sym_DOLLAR_LBRACE;
	v->a[126907] = anon_sym_DOLLAR_LPAREN;
	v->a[126908] = anon_sym_BQUOTE;
	v->a[126909] = anon_sym_DOLLAR_BQUOTE;
	v->a[126910] = sym_word;
	v->a[126911] = anon_sym_SEMI;
	v->a[126912] = 8;
	v->a[126913] = actions(57);
	v->a[126914] = 1;
	v->a[126915] = sym_comment;
	v->a[126916] = actions(7216);
	v->a[126917] = 1;
	v->a[126918] = sym_file_descriptor;
	v->a[126919] = state(2792);
	small_parse_table_6346(v);
}

void	small_parse_table_6346(t_small_parse_table_array *v)
{
	v->a[126920] = 1;
	v->a[126921] = sym_file_redirect;
	v->a[126922] = actions(5441);
	v->a[126923] = 2;
	v->a[126924] = anon_sym_PIPE;
	v->a[126925] = anon_sym_LT_LT;
	v->a[126926] = actions(7145);
	v->a[126927] = 2;
	v->a[126928] = anon_sym_LT_AMP_DASH;
	v->a[126929] = anon_sym_GT_AMP_DASH;
	v->a[126930] = actions(7143);
	v->a[126931] = 3;
	v->a[126932] = anon_sym_GT_GT;
	v->a[126933] = anon_sym_AMP_GT_GT;
	v->a[126934] = anon_sym_GT_PIPE;
	v->a[126935] = actions(5443);
	v->a[126936] = 4;
	v->a[126937] = anon_sym_PIPE_AMP;
	v->a[126938] = anon_sym_AMP_AMP;
	v->a[126939] = anon_sym_PIPE_PIPE;
	small_parse_table_6347(v);
}

void	small_parse_table_6347(t_small_parse_table_array *v)
{
	v->a[126940] = anon_sym_LT_LT_DASH;
	v->a[126941] = actions(7141);
	v->a[126942] = 5;
	v->a[126943] = anon_sym_LT;
	v->a[126944] = anon_sym_GT;
	v->a[126945] = anon_sym_AMP_GT;
	v->a[126946] = anon_sym_LT_AMP;
	v->a[126947] = anon_sym_GT_AMP;
	v->a[126948] = 6;
	v->a[126949] = actions(57);
	v->a[126950] = 1;
	v->a[126951] = sym_comment;
	v->a[126952] = actions(5531);
	v->a[126953] = 1;
	v->a[126954] = anon_sym_PIPE;
	v->a[126955] = actions(7259);
	v->a[126956] = 1;
	v->a[126957] = anon_sym_PIPE_AMP;
	v->a[126958] = state(2711);
	v->a[126959] = 1;
	small_parse_table_6348(v);
}

void	small_parse_table_6348(t_small_parse_table_array *v)
{
	v->a[126960] = aux_sym_pipeline_repeat1;
	v->a[126961] = actions(5362);
	v->a[126962] = 6;
	v->a[126963] = anon_sym_LT;
	v->a[126964] = anon_sym_GT;
	v->a[126965] = anon_sym_AMP_GT;
	v->a[126966] = anon_sym_LT_AMP;
	v->a[126967] = anon_sym_GT_AMP;
	v->a[126968] = anon_sym_LT_LT;
	v->a[126969] = actions(5367);
	v->a[126970] = 9;
	v->a[126971] = sym_file_descriptor;
	v->a[126972] = anon_sym_AMP_AMP;
	v->a[126973] = anon_sym_PIPE_PIPE;
	v->a[126974] = anon_sym_GT_GT;
	v->a[126975] = anon_sym_AMP_GT_GT;
	v->a[126976] = anon_sym_GT_PIPE;
	v->a[126977] = anon_sym_LT_AMP_DASH;
	v->a[126978] = anon_sym_GT_AMP_DASH;
	v->a[126979] = anon_sym_LT_LT_DASH;
	small_parse_table_6349(v);
}

void	small_parse_table_6349(t_small_parse_table_array *v)
{
	v->a[126980] = 6;
	v->a[126981] = actions(57);
	v->a[126982] = 1;
	v->a[126983] = sym_comment;
	v->a[126984] = actions(7262);
	v->a[126985] = 1;
	v->a[126986] = anon_sym_PIPE;
	v->a[126987] = actions(7265);
	v->a[126988] = 1;
	v->a[126989] = anon_sym_PIPE_AMP;
	v->a[126990] = state(2709);
	v->a[126991] = 1;
	v->a[126992] = aux_sym_pipeline_repeat1;
	v->a[126993] = actions(5362);
	v->a[126994] = 6;
	v->a[126995] = anon_sym_LT;
	v->a[126996] = anon_sym_GT;
	v->a[126997] = anon_sym_AMP_GT;
	v->a[126998] = anon_sym_LT_AMP;
	v->a[126999] = anon_sym_GT_AMP;
	small_parse_table_6350(v);
}

/* EOF small_parse_table_1269.c */
